#include<iostream>

int main(int argc, char const *argv[]) {

  int a = 5;
  int* b = &a;
  int** c = &b;

  std::cout << a << std::endl;
  std::cout << &a << std::endl;

  std::cout << *b << std::endl;
  std::cout << b << std::endl;
  std::cout << &b << std::endl;

  std::cout << **c << std::endl;
  std::cout << *c << std::endl;
  std::cout << &*c << std::endl;
  std::cout << &c << std::endl;

  return 0;
}
