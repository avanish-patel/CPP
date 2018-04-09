#include<iostream>

// passing the pointer in method
void swap(int* x, int* y){

  int z = *x;
  *x = *y;
  *y = z;
}

int main(){

  int a= 45, b = 22;

  std::cout << "Before swap "<< std::endl;
  std::cout << "a = " << a << ", b = "<< b <<std::endl;

  // passing the address of variable in method
  swap(&a,&b);

  std::cout << "After swap "<< std::endl;
  std::cout << "a = " << a << ", b = " << b << std::endl;
}
