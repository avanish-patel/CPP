#include<iostream>
#include<string>

int main(int argc, char const *argv[]) {

  std::string name;

  std::cout << "Enter your name : ";
  std::getline(std::cin, name);

  std::cout <<"Thank you, " << name << std::endl;

  std::cout << "Hit enter ot exit" << std::endl;
  std::getline(std::cin, name);

  return 0;
}
