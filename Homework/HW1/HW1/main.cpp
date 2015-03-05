/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 12:51 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //HW1part1
    cout<<"Hello \n";
    int number_of_pods, peas_per_pod, total_peas;
    cout << "press return after entering a number. \n";
    cout << "Enter the number of pods: \n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod: \n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout<< "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods. \n";
    cout << "Good bye \n";
    
    
    //HW1Part5
    int x, y, z;
    cout << "Enter a number: ";
    cin >> x;
    cout << endl << "Enter another number: ";
    cin >> y;
    z = x+y;
    cout<< endl << "The sum of the two numbers is "<< z;
    z = x*y;
    cout<< endl << "The product of the two numbers is " <<z<<endl;
    
    //HW1Part6
//    #include < iostream
//
//     maiin(int argc, char argv){
//         int main(int argc, char argv {
//             int main int argc, char arvg {
//                 cut<<;
//                 sin>>;
//             }
//         }
//         return 0;
//     }

    //HW1Part7
    cout<<setw(50)<<setfill('*')<<"*"<<endl;


    return 0;
}

