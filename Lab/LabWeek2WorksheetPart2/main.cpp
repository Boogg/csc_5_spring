/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 26, 2015, 11:23 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //part 1
    string name;
    cout<<"1) "<<endl;
    cout<<"Hello, my name is Hal!"<<endl<<"What is your name?"<<endl;
    cin>>name;
    cout<<endl<<"Hello, "<<name<<". I am glad to meet you."<<endl<<endl;
    
    //part 2
    int a=5;
    int b=10;
    int c;
    cout<<"2) "<<endl;
    cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"a: "<<a<<" "<<"b: "<<b<<endl<<endl;
    
    //part 3
    double meters;
    double conversion;
    double mileMeters= 1609.344;
    double meterFeet= 3.281;
    cout<<"How many meters? ";
    cin>> meters;
    cout<<meters/mileMeters<<" miles, or"<<endl;
    cout<<meters*meterFeet<<" feet, or"<<endl;
    cout<<meters*meterFeet*12<<" inches."<<endl<<endl;
    
    //part 4
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    x+=5;
    cout<<x<<endl<<endl;
    
    //part 5
    double score1, score2, score3, avg;
    cout<<"Type in your scores"<<endl;
    cout<<"Score 1: ";
    cin>>score1;
    cout<<endl<<"Score 2: ";
    cin>>score2;
    cout<<endl<<"Score 3: ";
    cin>>score3;
    cout<<endl<<"The average is: "<<(score1+score2+score3)/3<<endl<<endl;
    
    //PART 6    
    int z,digit;
    
    cout<<"Enter an integer between 1 and 10000: ";
    cin>>z;
    digit= z/10000;
    cout<<digit<<" ";
    digit= (z%10000)/1000;
    cout<<digit<<" ";
    digit= (z%1000)/100;
    cout<<digit<<" ";
    digit=(z%100)/10;
    cout<<digit<<" ";
    digit=(z%10);
    cout<<digit<<endl<<endl;
    
    return 0;
}

