/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 2, 2015, 12:41 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    

    cout<<"\n\nPart 3\nPlease enter a year between 1000 and 3000 in roman"
            " numerals: ";
    string numeral;
    int year, temp1, temp2;
    year=temp1=temp2=0;
    cin>>numeral;
    for(int i=0;i<numeral.size();i++){
        if(numeral[i] == 'M'){
            temp1=1000;
        }else if(numeral[i] == 'D'){
            temp1=500;
        }else if(numeral[i]=='C'){
            temp1=100;
        }else if(numeral[i]=='L'){
            temp1=50;
        }else if(numeral[i]=='X'){
            temp1=10;
        }else if(numeral[i]=='V'){
            temp1=5;
        }else if(numeral[i]=='I'){
            temp1=1;
        }else{
            cout<<"\nInvalid Roman Numeral";
            break;
        }
        cout<<endl<<temp1<<" "<<temp2<<" "<<year;        
        if(temp1< temp2 && temp2==0){
            temp1=temp2;
        }else if(temp1>= temp2 || temp2==0 ){
            temp1-=temp2;
            year+=temp1;
            temp2=temp1;

        
        cout<<endl<<temp1<<" "<<temp2<<" "<<year;
    }
    cout<<"\nThe year is: "<<year;
    
    return 0;
}

