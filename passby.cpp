#include<iostream>

void passbyvalue(int value);
void passbyreference(int& reference);
void passbypointer(int* pointer);

int main(int argc, char const *argv[])
{
    int a = 20;

    std::cout << "Before calling function a = " << a <<  std::endl;

    //passbyvalue(a);
    //passbyreference(a);
    passbypointer(&a);

    std::cout << "After calling function a = "<< a << std::endl;




    return 0;
}

void passbyvalue(int value){

    value = 100;

    std::cout << "value = "<< value << std::endl;

}

void passbyreference(int& reference){

    reference = 200;

    std::cout << "reference = " << reference << std::endl;
}

void passbypointer(int* pointer){

    *pointer = 300;

    std::cout << "*pointer = "<< pointer << std::endl;
}
