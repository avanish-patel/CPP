#include<iostream>

void evenOrOdd(int);

int main(){

  // calling fuction through a loop
  int i;
  do{

    std::cout <<  "Enter a number to check wheater, it's even or odd ( 0 to exit) :";
    std::cin >> i;
    evenOrOdd(i);


  } while(i != 0);


  return 0;
}

void enenOrOdd(int x){

  if(x%2 == 0){

    std::cout << x << " is even."<<std::endl;

  }else{

    std::cout << x << " is odd."<< std::endl;
  }
}
