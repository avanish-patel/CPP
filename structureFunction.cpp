#include<iostream>

// structure student
struct Student{

  int id;
  char grade;
  int age;

};

// functionsa
void printStudent(Student s){

  std::cout << s.id <<std::endl;
  std::cout << s.grade << std::endl;
  std::cout << s.age << std::endl;

}

void printPointerStudent(Student *s){

  std::cout << s->id << std::endl;
  std::cout << s->grade << std::endl;
  std::cout << s->age << std::endl;

}


// main method
int main() {

  Student avanish = { 102, 'A', 24};

  std::cout << "Using struct : " << std::endl;

  printStudent(avanish);

  std::cout << "Using the address of struct: "<<std::endl;
  printPointerStudent(&avanish);

  return 0;
}
