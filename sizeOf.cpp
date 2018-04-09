#include<iostream>
#include<string>
int main(){

  std::cout << "Size of int : " << sizeof(int) << " bytes" <<std::endl;
  std::cout << "Size of short : " << sizeof(short) << " bytes" <<std::endl;
  std::cout << "Size of long : " << sizeof(long) << " bytes" <<std::endl;
  std::cout << "Size of long double : " << sizeof(long double) << " bytes" <<std::endl;
  std::cout << "Size of char : " << sizeof(char) << " bytes" <<std::endl;
  std::cout << "Size of double : " << sizeof(double) << " bytes" <<std::endl;


  std::string name ="Avanish";
  std::cout << "Size of name : " << sizeof(name) << " bytes" <<std::endl;
  return 0;
}
