#include<iostream>
#include<string>

int main(int argc, char const *argv[]) {

  std::string name;
  std::cout << "Enter your name :";
  std::cin >> name;

  std::cout << "Thank you, " << name << std::endl;
  std::cin >> name;


  return 0;
}
