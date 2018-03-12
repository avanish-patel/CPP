#include<iostream>

using namespace std;

bool checkEligibility(int age){


    if (age < 18){

        return false;

    }else{

        return true;
    }
}
int main(){

    cout << "Age = 12 --> " << checkEligibility(12) << endl;
    cout << "Age = 24 --> " << checkEligibility(24) << endl;

    return 0;

}
