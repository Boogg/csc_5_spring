/* 
 * File:   Lab1.cpp
 * Author: rcc
 *
 * Created on February 24, 2015, 11:41 AM
 */
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Hello, my name is Travis!" << endl << "What is your name? ";
    
    string firstName;
    cin >> firstName;
    
    cout << endl << "Hello, " << firstName << ". I am glad to meet you.";
    
    return 0;
}

