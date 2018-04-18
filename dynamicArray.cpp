#include <iostream>

int main(int argv, char const *argc[])
{

    int *pointer = NULL;

    int input;

    std::cout << "Enter number of elements you wants to store : ";

    std::cin >> input;

    pointer = new int[input];

    int temp;

    for(int i = 0; i < input ; i++){

        std::cout << "Enter " << i+1 << " element :";
        std::cin >> temp;

        *(pointer+i) = temp;
    }

    std::cout << "You stored in heap :" << std::endl;

    for(int i =0; i<input; i++){

        std::cout << *(pointer+i) << std::endl;
    }

    delete[] pointer;
    pointer = NULL;


    return 0;
}
