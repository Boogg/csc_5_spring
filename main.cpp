#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare our variables
    //add an endl to go to the next line
    cout << "Hello World" << endl;
    
    string text = "Hello World Again";
    
    cout << text;
    
    //create and integer input
    int userInput;
    
    //promt the user
    cout << endl << "please enter a number. ";
    
    //use cin to get user input
    cin >> userInput;
    
    //Output number to the user
    cout << "You entered: " << userInput;

    return 0;
}

