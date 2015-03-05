/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 11:28 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //part 1
    string var1 = "1";
    int var2 = 2;
    cout<<"Part 1\n"<<var1<<"+"<<var1<<"="<<var1 + var1 <<endl;
    cout<<var2<<"+"<<var2<<"="<<var2 + var2 <<endl;
    
    
    //part 2
    int singles, doubles, triples, homeRuns, atBats;
    double sluggingPercentage;
    cout<<"\nPart2\nHow many at bats? ";
    cin>>atBats;
    cout<<"\nHow many singles? ";
    cin>>singles;
    cout<<"\nHow many doubles? ";
    cin>>doubles;
    cout<<"\nHow many triples? ";
    cin>>triples;
    cout<<"\nHow many Home runs? ";
    cin>>homeRuns;
    sluggingPercentage = static_cast<double>(singles+2*doubles+3*triples+4*homeRuns);
    sluggingPercentage = sluggingPercentage/ static_cast<double>(atBats);
    cout<<"\nSlugging percentage is: " << sluggingPercentage<<endl; 
    
    
    //part 3
    int a, b, c;
    cout<<endl<<"\nPart 3\nEnter a number less than 1000: ";
    cin>>a;
    cout<<"\nEnter another number less than 1000: ";
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<left<<"\nX="<<setw(5)<<a<<" Y="<<setw(5)<<b<<endl;
    cout<<setw(80)<<setfill('-')<<"-";
    cout<<setfill(' ')<<"\nX="<<setw(5)<<b<<" Y="<<setw(5)<<a<<endl;
    
    //part 4
    int x, y;
    x = 4;
    y = 0;
    
    if(x == 4){
        y = 4;
    }else if(x == 9){
        y = 5;
    }else{
        y=6;
    }
    cout<<endl<<"Part 4"<<endl<<"X="<<x<<endl<<"Y="<<y<<endl;
    
    
    //part 5
    float price, payment, change;
    
    cout<<"\nPart5\nWhat is the price of the purchase? ";
    cin>>price;
    cout<<endl<<"How much have you payed? ";
    cin>>payment;
    if(price > payment){
        change = price - payment;
        cout<<"You still owe $"<<change<<".\n";
    }else{
        change = payment - price;
        cout<<fixed<<setprecision(2)<<"Your change is $"<<change;     
        int change1 = static_cast<int>(change*100+.05); 
        int coins = change1 %100;
        int dollars = change1/100;
        cout<<"\nWhich is "<<dollars<<" dollar(s), ";
        int quarters = coins/25;
        cout<<quarters<<" quarter(s), ";
        int dimes = (coins%25)/10;
        cout<<dimes<<" dime(s), ";
        int nickles = (coins%25 - dimes*10)/5;
        cout<<nickles<<" nickle(s), and ";
        int pennies = (coins%25 - dimes*10 - nickles*5);
        cout<<pennies<<" pennies."<<endl;
    };
    return 0;
}

