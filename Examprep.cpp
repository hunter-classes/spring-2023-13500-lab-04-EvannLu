#include <iostream> //Must include these two to start
using namespace std; 

//all vars are doubled.

void withdraw(double& balance, double amount) { //When you want to update values on a var INCLUDE "&"!!!!
    const double penalty = 10; //penalty is fixed so use const
    if (balance >= amount) {
        balance = balance - amount;
    }
    else {
        balance = balance - penalty; 
    }
}

void print_a(int array[], int size) {
    for(int i=0; i < size; i++) {
        cout << array[i] << " ";
    }
}


int main () {    
    double henry_account = 1000; 
    double sally_account = 500; 

    //when calling void funcs, only call the func, not the "void"

    withdraw(henry_account, 100);
    withdraw(henry_account, 1000); 

    withdraw(sally_account, 150); 

    cout << "Henry's account: " << henry_account << endl; 
    cout << "Sally's account: " << sally_account << endl; 

    ///////////////////////////////////////////////////////
    const int size = 18;
    int array[size];
    for(int i=0; i<size; i+=3){
        array[i] = 0;
        array[i+1] = 1; 
        array[i+2] = 2;        
    }
    
    print_a(array, size);

    return 0;
}