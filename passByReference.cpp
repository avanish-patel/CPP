#include<iostream>

// passing the address of varibles into method
void swap(int &x, int &y){

  int z = x;
  x = y;
  y = z;
}
                           
int main(){

  int a= 34, b= 55;

  std::cout << "Before swap : "<< std::endl;
  std::cout << "a = " << a << ", b = " << b << std::endl;

  // passing the variable as method parameter
  swap(a,b);

  std::cout << "After swap : "<< std::endl;
  std::cout << "a = "<< a << ", b = "<< b << std::endl;
}
