using namespace std;
#include <vector>
#include <string>

//all things, person, item, place, or xxx
//will have a name, a level,  and an id
struct Thing{
  Thing();
  Thing(String name, int id, int level);
  ~Thing();
  String name;
  int id, level;
};

struct Item : Thing{
  Item();
  ~Item();
  int price;
  //String desc
};

struct Person : Thing{
  Person();
  ~Person();
  Vector<Item> Items;
};

//place will have people/vendors
struct Place : Thing {
  Place();
  ~Place();
  Vector<Person> People;
};
