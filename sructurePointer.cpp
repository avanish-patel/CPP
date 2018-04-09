#include<iostream>
#include<string>

struct Person{

  int id;
  std::string name;

};

int main(){

  Person avanish;
  Person* avanishPtr;

  avanishPtr = &avanish;

  avanish.id = 102;
  avanishPtr->name = "Avanish";

  std::cout << avanishPtr->id << std::endl;
  std::cout << avanish.name << std::endl;

  return 0;

}
