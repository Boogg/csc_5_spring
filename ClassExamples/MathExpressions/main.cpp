/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 26, 2015, 10:42 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //get two numbers from the user
    //claculate the avg
    int x,y;
    
    //get input from the user
    cout << "Enter two numbers"<<endl;
    
    cin>>x>>y;
    
    double avg = static_cast<double>(x+y)/2.0;
    
    cout<<"The average is: "<<avg;
    
    return 0;
}

