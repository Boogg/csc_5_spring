/* 
 * File:   main.cpp
 * Author: Travis Hajagos
 *
 * Created on March 5, 2015, 10:50 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //get a number fom the user
    cout<<"Please enter a number: ";
    
    int num;
    cin>> num;
    
    if(num >0){
        cout<<"\nThe number is positive.";
    }else{
        cout<<"\nThe number is negative.";
    }
    
    //check if even or odd
    int rem = num%2;
    if(rem=0){
        cout<<"\nThe number is even.";
    }else{
        cout<<"\nThe number is odd.";
    }

    return 0;
}

