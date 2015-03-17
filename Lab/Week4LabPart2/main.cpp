// 
//  File:   main.cpp
//  Author: Travis Hajagos
// 
//  Created on March 12, 2015, 11:37 AM
// 

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Part 1
    cout<<"\n\nPart 1";
    double score1;
    string lettGrade;
    string sign= " ";
    cout<<"\nPlease enter your letter grade: ";
    cin>>lettGrade;
    if(lettGrade.size() > 1){
        sign = lettGrade.substr(1,1);
    }
    lettGrade = lettGrade.substr(0,1);
    if(lettGrade == "a" || lettGrade == "A"){  
        if(sign == "-"){
            score1=3.7;
        }else{
            score1=4.0;
        }
    }else if(lettGrade == "b" || lettGrade == "B"){
        if(sign == "+"){
          score1 = 3.3;
        }else if(sign == "-"){
          score1=2.7;
        }else{
            score1 = 3.0;
        }
    }else{
        score1=2.0;
      }
      
    

    cout<<endl<<setprecision(1)<<fixed<<score1;
    
    
    //Part2
    double n, guess, guess2, r;
    cout<<"\n\nPart2\nEnter a number: ";
    cin>>n;
    guess2=n;
    guess=n/2;
    while((guess2/guess-1) > 0.01){
        cout<<guess<<endl;        
        r= n / guess;
        guess2=guess;
        guess =(guess+r)/2;
    }  
    cout<<"The square root of "<<n<<" is: "<<setprecision(5)<<fixed<<
            guess;
    
    //Part 3
    int year;
    bool leapYear;
    cout<<"\n\nPart 3\n\nEnter a year:";
    cin>>year;
    if(year%4 == 0)
    {
        leapYear= true;
    }else{ 
        leapYear= false;
    }
    if(year%100 == 0){ 
        leapYear =false;
    }
    if(year%400 == 0){
        leapYear= true;
    }
    if(leapYear){ 
        cout<<"This is a leap year.";
    }else{ 
        cout<<"This is not a leap year.";
    }
    
    
    //Part 4
    cout<<"\n\nPart 4\n\nEnter a year:";
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0){
      cout<<"This is a leap year.";
    }else{
      cout<<"This is not a leap year.";
    }
    
    
    //Part 5
    int guess3;
    int i =1;
    string answer;
    srand(time(NULL));
    int numb = rand()%100+1;
    cout<<"\n\nPart 5\n\nIm thinking of a number\nGuess a number between 1"
            " and 100.";
    do{
        if(i > 10){
            cout<<"\nGame Over\nWould you like to play again? yes/no:";
            cin>>answer;
            if (answer == "yes"){
                srand(time(NULL));
                numb = (rand()%100)+1;
                i = 1;
            }else{
                break;
            }
        }
        cout<<"\nGuess "<<i<<":";
        cin>>guess3;
        if(guess3 > numb){
           cout<<"\nLower";
        }else if(guess3<numb){
           cout<<"\nHigher\n";
        }
        i++;
    }while(guess3 != numb);
    if(guess3 == numb){
    cout<<"\nYou win! The number was "<<numb<<".";
    }
    return 0;
}