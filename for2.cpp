#include<iostream>

int main(int argc, char const *argv[]) {

    for(int i =0; i<=10 ; i++){

      for(int j=0; j<= 10; j++){

        std::cout <<  j << " " ;
      }
      std::cout << ""<<std::endl;
    }

    for(int i =0; i<=10 ; i++){

      for(int j=0; j<= i; j++){

        std::cout <<  j << " " ;
      }
      std::cout << ""<<std::endl;
    }
  return 0;
}
