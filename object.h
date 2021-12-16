using namespace std;
#include <vector>
#include <string>
#include <iostream>

//all things, person, item, place, or xxx
//will have a name, a level,  and an id
struct Thing{
  Thing();
  Thing(string name, int id, int level);
  ~Thing();
  string name;
  int id, lvl;
  void printID();
};

struct Item : Thing{
  Item();
  Item (string name, int id, int level, int price);
  ~Item();
  int price;
  //string desc
};

struct Person : Thing{
  Person();
  Person (string name, int id, int level, int opinion);
  ~Person();
  int opinion;
  vector<Item> Items;
};

//place will have people/vendors
struct Place : Thing {
  Place();
  Place (string name, int id, int level);
  ~Place();
  vector<Person> People;

  int disp();
};

struct Town : Thing {
  Town();
  Town(string name, int id, int level, int pop);
  ~Town();
  vector<Place> Places;
  int pop;

  int disp();
};

