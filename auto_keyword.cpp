#include<iostream>

int sum(int a, int b){

    return a+b;
}

int main(){

    // the compiler figureout what is the type of variable during compile time

    auto age = 30;

    std::cout << age << std::endl;

    auto total = sum(23,89);

    std::cout << total << std::endl;

    return 0;
}
