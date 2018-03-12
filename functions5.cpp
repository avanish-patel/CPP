#include<iostream>

using namespace std;

// inline keyword put the block of code in main method, use only when block of code is very small


inline void display(int a){

    cout << "a = " << a << endl;

}

int main(){

    display(5);
    display(10);

    return 0;

}

