#include<iostream>

int main(int argc, char const *argv[]) {

// decrementing loop
  int x = 10;

  while (x) {

    std::cout << x << std::endl;
    x--;
  }

// incrementing loop
  int y = 0;
  while (y < 10) {
    std::cout << y << std::endl;
    y++;
  }
  return 0;
}
