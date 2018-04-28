#include<iostream>

int main(int argc, char const *argv[]) {

  for(int tens = 0; tens <= 100; tens+= 10){
      std::cout << "Tens at : " << tens << std::endl;

    for(int ones = 0; ones <= 10; ones++){
      std::cout << ones + tens << std::endl;
    }
  }
  return 0;
}
