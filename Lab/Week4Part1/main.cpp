/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 10, 2015, 11:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

//    //part 1
//    int score;
//    string grade;
//    cout<<"Part 1\nEnter your score: ";
//    cin>>score;
//    
//    if(score>=90){
//            grade = "A";
//    }else if(score <90 && score >=80){
//            grade = "B";
//    }else if(score <80 && score >=70){
//            grade = "C";
//    }else if(score <70 && score >=60){
//            grade = "D";
//    }else{
//            grade="F";              
//    }
//    cout<<"\nYourd grade is a(n) "<<grade<<".";
//    
//    
//    //Part 2
//    cout<<"\n\nPart 2\n";
//    //a) it is an inifite loop that never ends because x will always be 0 
//    //   and will always be less than 10.
//    int x=0;
//    while(x<10){
//        cout<<"Enter a number: ";
//        cin>>x;
//        cout<<endl<<x<<endl;
//    }
//    
//    //Part 3
//    cout<<"\n\nPart3";
//    int y;
//    for(int i=0; i <10; i++){
//        cout<<"\nEnter integer "<<i+1<<": ";
//        cin>>y;
//        cout<<endl<<y;
//    }
//    
    //Part 4
    cout<<"\n\nPart 4";
    string score1;
    string lettGrade;
    cout<<"\nPlease enter your letter grade: ";
    cin>>lettGrade;
    
    if(lettGrade == "a+"||"A+"){
        score1="100+";
    }else if(lettGrade == "a"||"A"){
        score1="93-100";
    }
    cout<<endl<<score1;
              
                      
    
    
    return 0;
}

