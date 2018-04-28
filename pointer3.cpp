#include<iostream>
// pointer arithmetic to access the elements of array
int main(int argc, char const *argv[]) {

  int a[] = {1,2,3,4,5};

  int* p = a;  // similar to a[0]

  std::cout << *p << std::endl;
  std::cout << *(p+1) << std::endl;
  std::cout << *(p+2) << std::endl;
  std::cout << *(p+3) << std::endl;
  std::cout << *(p+4) << std::endl;


  char c[] = {'a','b','c','d','e'};

  char* d = c; // similar to c[0]

  std::cout << *d << std::endl;
  std::cout << *(d+1) << std::endl;
  std::cout << *(d+2) << std::endl;
  std::cout << *(d+3) << std::endl;

  return 0;
}
