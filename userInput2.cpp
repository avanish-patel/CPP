#include<iostream>
#include<string>

int main(){

  std::string name, teamName;

  // use getline to get input stream and name of varible
  std::cout << "What is your name : ";
  getline(std::cin, name);
  std::cout << "Hello, " << name << std::endl;
  std::cout <<"What is your favourite Cricket team : ";
  getline(std::cin, teamName);
  std::cout << "I like "<< teamName << " too."<<std::endl;
}
