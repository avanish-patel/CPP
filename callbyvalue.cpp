#include<iostream>

using namespace std;

// In pass by value or call by value , the original value is not modified

void change(int);

int main(){
    
    int data = 20;

    change(data);

    cout<< "The value of data after passing throught fucntions is : " << data << endl;

    return 0;
}

void change(int data){

    data = 2000000;

}
