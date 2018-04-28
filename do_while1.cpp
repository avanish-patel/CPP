#include<iostream>

int main(int argc, char const *argv[]) {

  int i = 5;

  do{
    std::cout << i << std::endl;
    i--;
  } while(i);

  int j = 0;

  do{

    std::cout << j << std::endl;
    j++;
  } while(j < 7);

  return 0;
}
