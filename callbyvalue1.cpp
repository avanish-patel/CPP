#include<iostream>

using namespace std;

void swap(int a, int b){

    int swap;

    swap = a;

    a = b;
    b = swap;

}

int main(){


    int  a=20, b=40;
    
    cout << "Value of a before swap: " << a << endl;
    cout << "Value of b before swap: " << b << endl;
    
    swap(a,b);

    cout << "Value of a after swap: " << a << endl;
    cout << "Value of b after swap: " << b << endl;

    
    return 0;
}
