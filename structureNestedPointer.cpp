#include<iostream>
#include<string>

struct Address{

  int house_no;
  std::string street_name;

};

struct Student{

  int id;
  std::string name;
  Address address;

};

int main(){

  Student avanish = {101,"Avanish", Address{12,"Pulaski road"}};

  Student *avanishPtr = &avanish;

  std::cout << "Id : " << avanishPtr->id <<" Name : " << avanishPtr->name << std::endl;
  std::cout << "Address : " << avanishPtr->address.house_no << " " << avanishPtr->address.street_name << std::endl;


}
