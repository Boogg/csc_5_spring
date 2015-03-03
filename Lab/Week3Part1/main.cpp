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
    cout<<var1<<"+"<<var1<<"="<<var1 + var1 <<endl;
    cout<<var2<<"+"<<var2<<"="<<var2 + var2 <<endl;
    
    
    //part 2
//    double 
    //part 3
    int a, b, c;
    cout<<endl<<"Part 3"<<endl<<"Enter a number less than 1000: ";
    cin>>a;
    cout<<endl<<"Enter another number less than 1000: ";
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<left<<endl<<"X="<<setw(5)<<a<<" Y="<<setw(5)<<b<<endl;
    cout<<setw(80)<<setfill('-')<<"-"<<endl;
    cout<<setfill(' ')<<endl<<"X="<<setw(5)<<b<<" Y="<<setw(5)<<a<<endl;
    
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
    
    cout<<"What is the price of the purchase? ";
    cin>>price;
    cout<<endl<<"How much have you payed? ";
    cin>>payment;
    if(price > payment){
        change = price - payment;
        cout<<"You still owe "<<change<<"."<<endl;
    }else{
        change = payment - price;
        cout<<"Your change is $"<<change<<endl;     
        change = change*100;
        int denomination = static_cast<int>(change)/100;
        cout<<"Which is "<<denomination<<" dollar(s), ";
        denomination = static_cast<int>(change)%100;
        int quarters = denomination/25;
        cout<<quarters<<" quarter(s), ";
        int dimes = (denomination - quarters*25)/10;
        cout<<dimes<<" dime(s), ";
        int nickles = (denomination - quarters*25 - dimes*10)/5;
        cout<<nickles<<" nickle(s), and ";
        int pennies = (denomination - quarters*25 - dimes*10 - nickles*5);
        cout<<pennies<<" pennies."<<endl;
    }
    return 0;
}

