#include<iostream>

// calling functions from a functions
void odd(int x);
void even(int x);

int main(){

  int i;
  do {

    std::cout << "Please, Enter number (0 to exit) : ";
    std::cin >> i;

    odd(i);

  } while(i != 0);


  return 0;
}


void odd(int x){

  if(x %2 != 0){

    std::cout << x << " is odd."<< std::endl;
  }else{

    even(x);
  }
}

void even(int x){

  if (x%2 == 0) {
    std::cout << x << " is even."<< std::endl;
  }else{

    odd(x);
  }
}
