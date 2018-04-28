#include<iostream>

int main(int argc, char const *argv[]) {

  int a = 10;
  int& a_ref = a;

  std::cout << a << " = " << a_ref << " --> " << &a << " = " << &a_ref << std::endl;
  
  return 0;
}
