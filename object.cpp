#include "genericObject.h"

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

Town::Town(string NAME, int ID, int LVL, int POP){
  name = NAME;
  id = ID;
  lvl = LVL;
  pop = POP;
};

Town::~Town(){};

int Town::disp(){
  if( 
      name &&
      id && 
      id > 0 &&  
      lvl > 0 && 
      pop > -1
    ){
    cout <<'\n' << name 
    << "\nID: " << id << " LVL: " << 
    lvl << " POP: " << pop;
  }
  else return 1;
  return 0;
};

Place::Place(string NAME, int ID, int LVL){
  name = NAME;
  id = ID;
  lvl = LVL;
};

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
