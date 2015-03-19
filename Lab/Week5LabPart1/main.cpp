/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 17, 2015, 12:30 PM
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
//    double balance, payment, interest, total;
//    string answer;
//    cout<<"Part 1\n\n";
//    do{
//    cout<<"Enter your Balance:";
//    cin>>balance;    
//    cout<<"$"<<setprecision(2)<<fixed<<balance;
//    if(balance<=1000){
//    interest = balance *0.015;
//    }else{
//    interest = 15 + (balance-1000)*0.01;
//    }
//    balance += interest;
//    payment = balance/10;
//    if(balance<10 || payment<10){
//        payment = 10;
//    }
//    cout<<" balance = $"<<fixed<<balance<<" total, $"<<payment<<
//            fixed<<" minimum Payment\n";
//    cout<<"Calculate again? yes/no: ";
//    cin>>answer;
//    }while(answer == "yes");
//    
    //Part 2
    cout<<"\n\nPart 2\n\nLets play 23!";
    int player, computer;
    int toothpicks = 23;
    
    do{
        cout<<endl<<toothpicks<<" left\nhow many toothpicks would you like to take(1-3)? ";
        cin>>player;
        if(player>3){
            cout<<"\nNumber must be 3 or less\nhow many toothpicks "
                    "would you like to take(1-3)? ";
            cin>>player;
        }
        if(player > toothpicks-1){
            cout<<"\nYou must leave atleast 1 toothpick."<<
                    " Try again: ";
            cin>>player;     
        }
        toothpicks -= player;
        cout<<endl<<toothpicks<<" toothpicks left";
        if(toothpicks>7){
          srand(time(NULL));
          computer = rand()%3+1;
        }else if(toothpicks<=7 && toothpicks>4){
            computer=toothpicks-4;
        }else{
            computer=toothpicks-1;
        }
        toothpicks -= computer;
        if(toothpicks < 1){
            cout<<"\nYou win!";
            break;
        }
        if(toothpicks == 1){
            cout<<"\nYou loose";
        }
        cout<<"\nThe compuer chooses "<<computer<<" toothpicks";
        cout;
        
    }while(toothpicks>1);
    
    
    
    
    
    
    
    
    
    
    return 0;
}

