#include<iostream>

using namespace std;

// In pass by reference or call by reference, the original value is modified because we passing reference(address) of memory location

void change(int*);

int main(){
    
    int data = 20;

    change(&data);

    cout << "The value of data after passing through the function is : " << data <<endl;

    return 0;

}

void change(int* p){

    *p = 2000000;

}
