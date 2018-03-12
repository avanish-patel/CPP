#include<iostream>

using namespace std;

int main(){


    int a = 34;
    bool b = true;

    int* ptra = &a;
    bool* ptrb = &b;

    cout << a << " --------> " << ptra << " <-------- " << *ptra << endl;
    cout << b << " --------> " << ptrb << " <-------- " << *ptrb << endl;

    return 0;

}
