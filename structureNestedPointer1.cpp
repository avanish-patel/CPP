#include<iostream>
#include<string>

struct Address{

  int house_no;
  std::string street_name;

};

struct Person{

  int id;
  std::string name;
  Address *address;
};

int main(){

  Person avanish;
  Person *avanishPtr = &avanish;

  avanishPtr->id = 102;
  avanishPtr->name = "Avanish";

  Address address = {123, "Pulaski Road"};

  std::cout << avanishPtr->id << " " << avanishPtr->name << std::endl;
  std::cout << avanishPtr->address->house_no << " " << avanishPtr->address->street_name << std::endl;

  return 0;
}
