#include "townGen.h"

int main (){
  int id, lvl, pop;
  id = 0;
  string name;
  //testing vals
  lvl = pop = 5;
  name = "Pallet Town";
  struct Town * town = new Town(name, ++id, lvl, pop); 
  town.disp();
  return 0;
};

void prompt (string &name,int &lvl,int  string &pop){
  char confirm = 'n';
  while (confirm != 'y'){
  cout << "[]==========================[]\n";
  cout << "||                          ||\n";
  cout << "||  Enter Town Level, 1-20  ||\n";
  cout << "||                          ||\n";
  cout << "[]==========================[]\n\n";
  cin >> lvl;
  cout << "[]==========================[]\n";
  cout << "||                          ||\n";
  cout << "||  Enter Town Pop, 1-20    ||\n";
  cout << "||                          ||\n";
  cout << "[]==========================[]\n\n";
  cin >> pop;
  cout << "[]==========================[]\n";
  cout << "||                          ||\n";
  cout << "||  Enter Town Name, 1-20   ||\n";
  cout << "||                          ||\n";
  cout << "[]==========================[]\n\n";
  cin >> name;
  cout << name << ", a lvl: " << lvl << " town with a pop of " << pop;
  cout << "\n\nConfirm?
  cout << "[]==========================[]\n";
  cout << "||                          ||\n";
  cout << "||  Confirm?                ||\n";
  cout << "||  y/n                     ||\n";
  cout << "||                          ||\n";
  cout << "[]==========================[]\n\n";
  cin >> confirm;
  }
};
