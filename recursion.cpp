#include<iostream>

long factorial(long a){

  if(a == 1){
    return 1;
  }

  return a* factorial(a-1);

}

int main(){

    int number = 9;

    std::cout << number << "! = " << factorial(number) << std::endl;
}
