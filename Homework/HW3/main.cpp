/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 19, 2015, 9:38 AM
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
    cout<<"Part 1\n\nEnter a telephone number: ";
    int dash;
    string teleNum, tele1, tele2;
    cin>>teleNum;
    dash = teleNum.find("-");
    tele1 = teleNum.substr(0, dash);
    tele2 = teleNum.substr((dash+1), (teleNum.size()-dash));
    cout<<tele1<<tele2;
    
    //Part2
    int apples, oranges, pears, leastNumber;
    cout<<"\n\nPart 2\n\nHow many apples? ";
    cin>>apples;
    leastNumber = apples;
    cout<<"\nHow many oranges? ";
    cin>>oranges;
    if(leastNumber>oranges){
        leastNumber = oranges;
    }
    cout<<"\n\nHow many pears? ";
    cin>>pears;
    if(leastNumber > pears){
        leastNumber = pears;
    }
    
    apples -= leastNumber;
    oranges -= leastNumber;
    pears -= leastNumber;
    
    cout<<"\n\nThe number of apples you should leave: "<<apples<<
            "\nThe number of oranges you should leave: "<<oranges<<
            "\nThe number of pears you should leave: "<<pears;
    
    //Part3
    cout<<"Part3\n\nWhat is the maximum room capacity?";
    int capacity, people;
    cin>>capacity;
    cout<<"\nHow many people are present?";
    cin>>people;
    
    if(people > capacity){
        people -= capacity;
        cout<<"\nYou have too many people. Please kick out "<<people<<
                " people.";
    }else{
        people = capacity - people;
        cout<<"\nYou are with in the maximum capacity of people by "<<
                people<<" people.";
    }
    
    //Part 4
    cout<<"\n\nPart 4\n\nEnter 10 integers, positive or negative: \n";
    int number,posSum,negSum,sum;
    posSum=negSum=sum=0;
    for(int i=0;i<10;i++){
        cin>>number;
        if(number>0){
            posSum+=number;
        }else{
            negSum+=number;
        }
        sum+=number;
    }
    cout<<"\nThe sum of all the positive numbers is: "<<
            posSum<<"\nThe sum of all the negative numbers is: "<<
            negSum<<"\nThe sum of all numbers entered is: "<<sum;

    return 0;
}

