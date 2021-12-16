#include "object.h"

//utility
//todo: move somewhere
int offset(){
  srand(time(NULL));
  return rand() % 3 - 1;
}

Thing::Thing(){};

Thing::Thing(string NAME, int ID, int LVL){
  name = NAME;
  id = ID;
  lvl = LVL;
};

Thing::~Thing(){};

void Thing::printID(){
  cerr << name << ' ' << id;
};

//town full of places
Town::Town(string NAME, int ID, int LVL, int POP){
  name = NAME;
  id = ID;
  lvl = LVL;
  pop = POP;


  //create places by pop, offset lvl and num of places by -1/0/1
  //if 0 or -1, set to 1

  srand(time(NULL));
  int numPlaces = pop + rand() % 3 +1;
  if(numPlaces <= 0) numPlaces = 1;

  for( int i = 0; i < numPlaces; ++i){
    
    string testName(1,char(65+i));

    struct Place * tempPlace = new Place(testName, ++ID, lvl + (rand()%3-1));
    Places.push_back(*tempPlace);
  }
};

Town::~Town(){};

int Town::disp(){
  if( !name.empty() && id && id > 0 &&  lvl > 0 && pop > -1 ){
    cout <<'\n' << name 
    << "\nID: " << id << " LVL: " << 
    lvl << " POP: " << pop;

    for( Place& p: Places){
      p.disp();
    }
  }
  else return 1;
  return 0;
};

//place make people
Place::Place(string NAME, int ID, int LVL){
  name = NAME;
  id = ID;
  lvl = LVL;

  srand(time(NULL));
  for(int i = 0; i < rand() % (lvl/2) + 1; ++i){
  
  }
};

int Place::disp(){
  if( !name.empty() && id > 0 && lvl > 0){
    cout << "\n\t" << name;
    cout << "\n\tID: " << id << " LVL: " << lvl;
  }
  else return 1;
  return 0;
}

Place::~Place(){};

Person::Person(string NAME, int ID, int LVL, int OPINION){
  name = NAME;
  id = ID;
  lvl = LVL;
  opinion = OPINION;
};

Person::~Person(){};

Item::Item(string NAME, int ID, int LVL, int PRICE){
  name = NAME;
  id = ID;
  lvl = LVL;
  price = PRICE;
};

Item::~Item(){};
