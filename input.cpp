#include<iostream>
#include<string>

int main(){

  int x;

  std::cout << "Enter an integer :";
  std::cin >> x;

  std::cout << "Thank you, You entered " << x<< std::endl;

  // it will wait for input
  std::cin >> x;

  return 0;
}
