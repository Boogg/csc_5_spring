/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 11:21 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Get two values from the user
    // Prompt the user
    // Store in variables
    cout << "Please enter a number: ";
    
    int num1, num2; // Variable declarations
    cin >> num1;
    
    cout<<endl<<"please enter another number: ";
    cin >> num2;
            
    
    // Want double division
    double avg = static_cast<double>(num1 + num2)/ 2.0;
    
    // Align with left
    cout << left;
    
    // Two decimal places
    cout << fixed << setprecision(2);
    
    //cout << setprecision(2);
    
    // Output manipulation
    // Make tables
    cout << setw(10) << "Value 1";
    cout << setw(10) << "Value 2";
    
    cout << endl;
   
    // use set fill
    //cout << setfill('+');
    
    cout << setw(10) << num1 << setw(10) << num2;
    
    cout << endl;
    
    // Output the average
    cout << setw(10) << "Avg: " << setw(10) << avg;
    return 0;
}

