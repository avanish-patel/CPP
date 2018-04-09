#include<iostream>
#include<string>

// structure to represent address
struct Address{

  int house_no;
  std::string street_name;

};

// structure to represent student with nested address structure
struct Student{

  int id;
  std::string name;
  Address address;
};

int main(int argc, char const *argv[]) {

  // defining the student avanish and nested structure with address
  Student avanish = {101,"Avanish", Address{23,"Pulaski Road"}};

  // printing the imformation of student avanish
  std::cout << "Id :" << avanish.id << std::endl;
  std::cout << "Name :" << avanish.name <<std::endl;
  std::cout << "Address : " << avanish.address.house_no << " " << avanish.address.street_name << std::endl;
  return 0;
}
