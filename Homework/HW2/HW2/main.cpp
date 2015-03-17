/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 10, 2015, 9:54 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Part 1
    cout<<"Part 1\n Syntax error example: Int x = \"string\";";
    cout<<"\nLogic error example: \nint x=0;\nint y=10/x";
    
    //Part 2
//    a) the output will be:
    
//    Hello my name is Calvin
//    Hi there Calvin! My name is Bill
//    Nice to meet you Bill.
//    I am wondering if you're available for what?
//    What? Bye Calvin!
//    Uh... sure, bye Bill!
//            
//    CalvinCalvinCalvinCalvinCalvin
//    BillBillBillBillBill
//    b) 2
//    c) string name1 = "Calvin";
//       string name2 = "Bill";
//    d) all of it is the program?
//    e) if you change the value of a variable it will change that value 
//       everywhere that variable is used.
            
    
    
    //Part 3
    string name1, name2, name3;
    int q1n1, q2n1, q3n1, q4n1,
        q1n2, q2n2, q3n2, q4n2,
        q1n3, q2n3, q3n3, q4n3;
    double q1avg, q2avg, q3avg, q4avg;
    
    cout<<"\n\nPart 3";
    cout<<"\nPlease enter the first name: ";
    cin>>name1;
    cout<<"\nPlease enter this persons four quiz scores: ";
    cin>>q1n1>>q2n1>>q3n1>>q4n1;
    cout<<"\nPlease enter the second name: ";
    cin>>name2;
    cout<<"\nPlease enter this persons four quiz scores: ";
    cin>>q1n2>>q2n2>>q3n2>>q4n2;
    cout<<"\nPlease enter the third name: ";
    cin>>name3;
    cout<<"\nPlease enter this person's four quiz scores: ";
    cin>>q1n3>>q2n3>>q3n3>>q4n3;
    
    q1avg= static_cast<double>(q1n1+q1n2+q1n3)/3;
    q2avg= static_cast<double>(q2n1+q2n2+q2n3)/3;
    q3avg= static_cast<double>(q3n1+q3n2+q3n3)/3;
    q4avg= static_cast<double>(q4n1+q4n2+q4n3)/3;
    
    cout<<setw(12)<<left<<"\nname"<<setw(9)<<left<<"Quiz 1"<<setw(9)<<left<<
            "Quiz 2"<<setw(9)<<left<<"Quiz 3"<<setw(9)<<left<<"Quiz 4"<<endl;
    cout<<setw(12)<<left<<"----"<<setw(9)<<left<<"------"<<setw(9)<<left<<
            "------"<<setw(9)<<left<<"------"<<setw(9)<<left<<"------"<<endl;
    cout<<setw(12)<<left<<name1<<setw(4)<<right<<q1n1<<setw(5)<<" "<<setw(4)<<
            right<<q2n1<<setw(5)<<" "<<setw(4)<<right<<q3n1<<setw(5)<<" "<<
            setw(4)<<right<<q4n1<<endl;
    cout<<setw(12)<<left<<name2<<setw(4)<<right<<q1n2<<setw(5)<<" "<<setw(4)<<
            right<<q2n2<<setw(5)<<" "<<setw(4)<<right<<q3n2<<setw(5)<<" "<<
            setw(4)<<right<<q4n2<<endl;
    cout<<setw(12)<<left<<name3<<setw(4)<<right<<q1n3<<setw(5)<<" "<<setw(4)<<
            right<<q2n3<<setw(5)<<" "<<setw(4)<<right<<q3n3<<setw(5)<<" "<<
            setw(4)<<right<<q4n3<<endl<<endl;
    cout<<setw(12)<<left<<"Average"<<setprecision(2)<<fixed<<setw(9)<<left<<
            q1avg<<setw(9)<<left<<q2avg<<setw(9)<<left<<q3avg<<setw(9)<<left<<
            q4avg<<endl;
    
    //Part4
    cout<<"\n\nPart4";
    string name1, name2, food, numb, adjective, color, animal;
    
    cout<<"\n\nLet's play a Mad Lib game! Woohoo!\nEnter a name: ";
    cin>>name1;
    cout<<"\nEnter another name: ";
    cin>>name2;
    cout<<"\nEnter a food: ";
    cin>>food;
    cout<<"\nEnter a number between 100 and 120: ";
    cin>>numb;
    cout<<"\nEnter an adjective: ";
    cin>>adjective;
    cout<<"\nEnter a color: ";
    cin>>color;
    cout<<"\nEnter an animal: ";
    cin>>animal;
    
    cout<<"\n\nDear "<<name1;
    cout<<"\nI am sorry that I am unable to turn in my homework at this time. "
            "First, I ate a rotten\n"<<food<<", which made me turn "<<color
            <<" and extremely ill. I came down with a fever of\n"<<numb<<
            ". Next, my "<<adjective<<" pet "<<animal<<" must have smelled the "
            "remains\nof the "<<food<<" on my homework because he ate it. I am"
            " currently rewriting my\nhomework and hope you will accept it late"
            ".\n\nSincerely,\n"<<name2;
    return 0;
}

