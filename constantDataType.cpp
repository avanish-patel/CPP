#include<iostream>

int main() {
  // constant PI whose value can't changed onece it's assign to it
  const long PI = 3.142;

  long radius;

  std::cout <<  "Enter the radius of circle : ";
  std::cin >> radius;

  double area = PI *radius *radius;

  std::cout << "Area of Circle : "<< area << std::endl;

  return 0;
}
