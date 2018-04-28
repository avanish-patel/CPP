#include<iostream>

int main(int argc, char const *argv[]) {

  // if 0 or false - not printing
  // if any number or true - printing

  if(1)
    std::cout << "1 is printed" << std::endl;
  if(0)
    std::cout << "0 is printed" << std::endl;
  if(5)
    std::cout << "5 is printed" << std::endl;

  if(!true)
    std::cout << "It is not printed" << std::endl;

  if(true && false)
    std::cout << "true && false" << std::endl;
  if(true || false)
    std::cout << "true || false" << std::endl;

  // if - else

  int x = 5;

  if(x < 4){
    std::cout << "a is less than 4" << std::endl;
  }else{
    std::cout << "a is greater than 4" << std::endl;
  }

  // unary operatora
  int a = 1, b = 4;
  (a > b) ? std::cout << a << " is greater than " << b << std::endl : std::cout << a << " is less than " << b << std::endl;

  return 0;
}
