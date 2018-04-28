#include<iostream>

int main(int argc, char const *argv[]) {

  int i = 0;
  for(;;){

    if (i == 5) {
        i++;
        continue;
    }
    std::cout << i << std::endl;
    i++;
    if (i > 10) {
      break;
    }
  }
  return 0;
}
