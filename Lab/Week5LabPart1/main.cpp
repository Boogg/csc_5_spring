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
    //part 1
    double balance, payment, interest, total;
    string answer;
    cout<<"Part 1\n\n";
    do{
    cout<<"Enter your Balance:";
    cin>>balance;    
    cout<<"$"<<setprecision(2)<<fixed<<balance;
    if(balance<=1000){
    interest = balance *0.015;
    }else{
    interest = 15 + (balance-1000)*0.01;
    }
    balance += interest;
    payment = balance/10;
    if(balance<10 || payment<10){
        payment = 10;
    }
    cout<<" balance = $"<<fixed<<balance<<" total, $"<<payment<<
            fixed<<" minimum Payment\n";
    cout<<"Calculate again? yes/no: ";
    cin>>answer;
    }while(answer == "yes");
    
    //Part 2
    cout<<"\n\nPart 2\n\nLets play 23!";
    int player, computer;
    int toothpicks = 23;
    
    do{
        cout<<endl<<toothpicks<<" toothpicks left\nhow many toothpicks would you like to take(1-3)? ";
        cin>>player;
        if(player>3){
            cout<<"Number must be 3 or less\nhow many toothpicks "
                    "would you like to take(1-3)? ";
            cin>>player;
        }
        if(player > toothpicks-1){
            cout<<"You must leave atleast 1 toothpick."<<
                    " Try again: ";
            cin>>player;     
        }
        toothpicks -= player;
        cout<<toothpicks<<" toothpicks left";
        if(toothpicks>7){
          srand(time(NULL));
          computer = rand()%3+1;
        }else if(toothpicks<=8 && toothpicks>5){
            computer=toothpicks-5;
        }else{
            computer=toothpicks-1;
            if(computer<1 || computer == 4){
                computer = 1;
            }
        }
        toothpicks -= computer;

        cout<<"\nThe computer chooses "<<computer<<" toothpicks";
        if(toothpicks < 1){
            cout<<"\nYou win!";
            break;
        }
        if(toothpicks == 1){
            cout<<"\nYou loose";
        }
        
    }while(toothpicks>1);
    
    //Part 3
    cout<<"\n\nPart 3\n\n";
    string word;
    do{
      cout<<"Please enter a word: ";
      cin>>word;
      int flag=0;
      int size = word.size();
      for(int i=0;i<(size/2);i++){
          if( word.substr(i,1)!= word.substr(size-i-1,1) && flag<1){
            cout<<"\nThis is not a palindrome.";
            flag++;
          }
      }
      if(flag<1){
          cout<<"\nThis is a palindrome!";
      }
      cout<<"\nWould you like to try another word? yes/no: ";
      cin>>answer;
    }while(answer == "yes");
        
        
    //part 4
    cout<<"\n\nPart 4\n\nPlease enter how many stars you would like per row: ";
    int stars;
    cin>>stars;
    stars++;
    for(int i=0;i<(stars-2);i+=2){
        for(int j=0;j<(i+1);j++){
            cout<<"*";
        }
        cout<<"-";
        for(int k=0; k<(stars-(i+2));k++){
            cout<<"*";
        }
        cout<<endl;
   }
    
    
    
    
    
    
       return 0;
}

