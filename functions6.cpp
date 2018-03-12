#include<iostream>

using namespace std;

void show(int [],int);

int main(){

    int array[] = {12,123,34,23,12,2134,23,213,5432};

    show(array, 9);

    return 0;

}


void show(int array[], int length){

    for(int i=0; i< length; i++){

        cout << array[i] << endl;

    }
}
