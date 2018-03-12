#include<iostream>

using namespace std;

int main(){

    int age;

    cout << "Enter you age: ";
    
    cin >> age;

    if(age < 18)
    {
        cout << "Sorry, You can't vote." << endl;

    }else{

        cout << "Congratulations, You can vote." << endl;
    }
    return 0;

}
