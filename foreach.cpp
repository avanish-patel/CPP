#include <iostream>

int main(int argc, char const *argv[])
{
    // for each loop or range based for loop

    int marks[] = {12,34,45,56,67,78,89};

    for(int mark : marks){

        std::cout << mark << std::endl;
    }

    return 0;
}
