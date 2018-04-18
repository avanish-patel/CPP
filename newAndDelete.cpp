#include <iostream>

int main(int argc, char const *argv[])
{
    // by using new keyword we can allocate memory into heap and create pointer in stack that points to specific location on heap

    int *intPointer = new int;

    *intPointer = 20;

    std::cout << *intPointer << std::endl;

    delete intPointer;
    intPointer = 0;

    return 0;
}
