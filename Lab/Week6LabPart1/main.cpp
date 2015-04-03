/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2015, 11:53 AM
 */

#include <cstdlib>
#include <iostream>
#include<iomanip>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Part 1
    cout<<"Part 1\n\n";
    int num1 =0;
    int num2 =0;
    
    srand(time(NULL));
    
    for(int i=0;i<5;i++){
       num1 = rand()%100;
       num2 = rand()%100;
       cout<<"{"<<num1<<", "<<num2<<"}";
       if(num1<=num2)num1=num2;
       cout<<" highest # is: "<<num1<<endl;
    }
    
    //Part 2
    ofstream outfile;
    outfile.open("test.txt");
    outfile<<"Hello World";
    outfile.close();
    
    
    cout<<"\n\nPart 2\n\nOpening file...";
    ifstream infile;
    int size = 0;
    if(!infile){
        cout<<"\nNot a valid file!";
    }else{
        infile.open("test.txt");
        string input;
        while(infile>>input){
          size += input.size();
        }
        cout<<endl<<size<<" characters in this file";        
    }
    infile.close();

    //Part 3
    outfile.open("test2.txt");
    outfile<<size;
    outfile.close();
    
    //Part 4
    int n;
    double x=0;
    double s;
   
    cout<<"\n\nPart4\nPlease enter a numer less than 10: ";
    cin>>n;
    cout<<"\nDo While loop:";
    int n2=n;
 
    do{
        s=1.0/(1+n2*n2);
        n2++;
        x+=s;
        cout<<endl<<s<<" "<<x<<" "<<n2;
    }while(s>0.01);
    cout<<"\n\nWhile Loop:";
    s=1;
    x=0;
    while(s > 0.01){
        s=1.0/(1+n*n);
        n++;
        x+=s;
        cout<<endl<<s<<" "<<x<<" "<<n;
    }
    
    
    
    return 0;
}

