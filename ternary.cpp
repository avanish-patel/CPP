#include<iostream>

using namespace std;

int main(){

    int marks;

    cout << "Enter you marke to check wheather you pass or fail in the exam : ";
    cin >> marks;

    
    marks >= 35 ? cout << "Congratulations, you have pass the exam." << endl : cout << "Sorry, you failed in the exam." << endl;

    return 0;

}
