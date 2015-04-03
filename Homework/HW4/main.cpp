/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 2, 2015, 10:16 AM
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
    cout<<"\n\nPart 1\n\nEnter 10 integers, positive or negative: \n";
    
    int number,posSum,negSum,sum,posAvg,negAvg,totalAvg;
    posSum=negSum=sum=posAvg=negAvg=totalAvg=0;
    for(int i=0;i<10;i++){
        cin>>number;
        if(number>0){
            posSum+=number;
            posAvg++;
        }else{
            negSum+=number;
            negAvg++;
        }
        sum+=number;
        totalAvg++;
    }
    posAvg= posSum/posAvg;
    negAvg= negSum/negAvg;
    totalAvg= sum/totalAvg;
    cout<<  "\nThe sum of all the positive numbers is: "<<posSum<<
            "\nThe average of all positive numbers is: "<<posAvg<<
            "\nThe sum of all the negative numbers is: "<<negSum<<
            "\nThe average of all negative numbers is: "<<negAvg<<
            "\nThe sum of all numbers entered is: "<<sum<<
            "\nThe average of all numbers entered is:"<<totalAvg;

    //part 2
    cout<<"\n\nPart 2\n";
    
//    int number,posSum,negSum,sum;
//   double posAvg,negAvg,totalAvg;

    number=posSum=negSum=sum=posAvg=negAvg=totalAvg=0;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        number=rand()%201-100;
        cout<<number<<" ";
        if(number>0){
            posSum+=number;
            posAvg++;
        }else{
            negSum+=number;
            negAvg++;
        }
        sum+=number;
        totalAvg++;
    }
    posAvg= static_cast<double>(posSum)/posAvg;
    negAvg= static_cast<double>(negSum)/negAvg;
    totalAvg= static_cast<double>(sum)/totalAvg;
    cout<<  "\nThe sum of all the positive numbers is: "<<posSum<<
            "\nThe average of all positive numbers is: "<<posAvg<<
            "\nThe sum of all the negative numbers is: "<<negSum<<
            "\nThe average of all negative numbers is: "<<negAvg<<
            "\nThe sum of all numbers entered is: "<<sum<<
            "\nThe average of all numbers entered is:"<<totalAvg;
    
    //Part 3
    cout<<"\n\nPart 3";
    string numeral, answer;
    int year, temp1, temp2;
    bool error;
    do{
    error=false;
    year=temp1=temp2=0;
    cout<<"\nPlease enter a year between 1000 and 3000 in Roman"
            " numerals: ";
    cin>>numeral;
    for(int i=0;i<numeral.size();i++){ 
        if(numeral[i]=='M'){
            temp1=1000;
        }else if(numeral[i]=='D'){
            temp1=500;
        }else if(numeral[i]=='C'){
            temp1=100;
        }else if(numeral[i]=='L'){
            temp1=50;
        }else if(numeral[i]=='X'){
            temp1=10;
        }else if(numeral[i]=='V'){
            temp1=5;
        }else if(numeral[i]=='I'){
            temp1=1;
        }else{
            cout<<"Invalid Roman Numeral"; 
            error=true;
            break;
        } 
        
        year+=temp1; 
        if(temp2<temp1)year-= 2*temp2;
        temp2=temp1; 
        
    }
    if(!error)cout<<"The year is: "<<year; 
    cout<<"\nWould you like to convert another Roman numeral? (yes/no) ";
    cin>>answer;
    }while(answer=="yes");
    
    
    //Part 4
    cout<<"\nPart 4\n\n";
    int gender, height, weight, age, BMR, bars;
    answer= "";
    do{
    cout<<"Type 1 for male and 2 for female: ";
    cin>>gender;
    cout<<"Enter your weight in pounds: ";
    cin>>weight;
    cout<<"Enter your height in inches: ";
    cin>>height;
    cout<<"Enter your age: ";
    cin>>age;
    
    switch(gender){
        case 1:
            BMR= 655+(4.3*weight)+(4.7*height)-(4.7*age);
               bars = BMR/230;
               cout<<"\nYou would need to eat "<<bars<<" chocolate bars.";
            break;
        case 2:
            BMR= 66+(6.3*weight)+(12.9*height)-(6.8*age);
               bars = BMR/230;
               cout<<"\nYou would need to eat "<<bars<<" chocolate bars.";
            break;
            
        default:
            cout<<"\ninvalid selection Please choose again";
            break;
    } 
    cout<<"\n\nWould you like to calculate again?(yes/no): ";
    cin>>answer;
    }while(answer == "yes");
    
    //Part 5
    cout<<"\n\nPart 5\nHow many exercises to input? ";
    int exercises, score, pointsPossible, totalScore, totalPoints;
    double percent;
    totalScore= totalPoints =0;
    cin>>exercises;
    for(int i=0;i<exercises;i++){
        cout<<"\nScore received for exercise "<<i+1<<": ";
        cin>>score;
        cout<<"Total points possible for exercise "<<i+1<<": ";
        cin>>pointsPossible;
        totalScore+=score;
        totalPoints+=pointsPossible;
    }
    percent= static_cast<double>(totalScore)/static_cast<double>(totalPoints);

    cout<<"\nYour total is "<<totalScore<<" out of "<<totalPoints<<", or "<<
            setprecision(2)<<fixed<<percent*100<<"%";
    
    //Part 6
    cout<<"\n\nPart 6\nPlayer 1 enter P,R, or S: ";
    char player1, player2;
    cin>>player1;
    cout<<"Player 2 enter P,R, or S: ";
    cin>>player2;
    
    if(player1 == 'S')player1 = 's';
    if(player1 == 'R')player1 = 'r';
    if(player1 == 'P')player1 = 'p';
    
    if(player2 == 'S')player2 = 's';
    if(player2 == 'R')player2 = 'r';
    if(player2 == 'P')player2 = 'p';
    
            if(player1 == 'r'){
            if(player2 == 'r')cout<<"\nTie!";
            else if(player2 == 'p')cout<<"\nPlayer 2 wins!";
            else if(player2 == 's')cout<<"\nPlayer 1 wins!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }   
        }else if(player1 == 'p'){
            if(player2 == 'r')cout<<"\nPlayer 1 wins!";
            else if(player2 == 'p')cout<<"\nTie!";
            else if(player2 == 's')cout<<"\nPlayer 2 wins!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }     
        }else if(player1 == 's'){
            if(player2 == 'r')cout<<"\nPlayer 2 wins!";
            else if(player2 == 'p')cout<<"\nPlayer 1 wins!";
            else if(player2 == 's')cout<<"\nTie!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }            
        }else{
            cout<<"\nPlayer 1 invalid choice";
        }
    
    if((player1=='p' && player2=='r')||(player1=='r' && player2=='p')){
        cout<<"\nPaper covers rock!";
    }else if((player1=='r' && player2=='s')||(player1=='s' && player2=='r')){
        cout<<"\nRock breaks scissors!";
    }else if((player1=='s' && player2=='p')||(player1=='p' && player2=='s')){
        cout<<"\nScissors cut paper!";
    }else{
        cout<<"\nNobody wins!";
    }

    //Part 7
    cout<<"\n\nPart 7";
    //already stated player 1 and 2
    string ans;
    do{
        cout<<"\nPlayer 1 enter P,R, or S: ";
        cin>>player1;
        cout<<"Player 2 enter P,R, or S: ";
        cin>>player2;

        if(player1 == 'S')player1 = 's';
        if(player1 == 'R')player1 = 'r';
        if(player1 == 'P')player1 = 'p';

        if(player2 == 'S')player2 = 's';
        if(player2 == 'R')player2 = 'r';
        if(player2 == 'P')player2 = 'p';
        
        if(player1 == 'r'){
            if(player2 == 'r')cout<<"\nTie!";
            else if(player2 == 'p')cout<<"\nPlayer 2 wins!";
            else if(player2 == 's')cout<<"\nPlayer 1 wins!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }   
        }else if(player1 == 'p'){
            if(player2 == 'r')cout<<"\nPlayer 1 wins!";
            else if(player2 == 'p')cout<<"\nTie!";
            else if(player2 == 's')cout<<"\nPlayer 2 wins!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }     
        }else if(player1 == 's'){
            if(player2 == 'r')cout<<"\nPlayer 2 wins!";
            else if(player2 == 'p')cout<<"\nPlayer 1 wins!";
            else if(player2 == 's')cout<<"\nTie!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }            
        }else{
            cout<<"\nPlayer 1 invalid choice";
        }

        if((player1=='p' && player2=='r')||(player1=='r' && player2=='p')){
            cout<<"\nPaper covers rock!";
        }else if((player1=='r' && player2=='s')||(player1=='s' && player2=='r')){
            cout<<"\nRock breaks scissors!";
        }else if((player1=='s' && player2=='p')||(player1=='p' && player2=='s')){
            cout<<"\nScissors cut paper!";
        }else{
            cout<<"\nNobody wins!";
        }
        cout<<"\nWould you like to play again?(yes/no) ";
        cin>>ans;
    }while(ans == "yes");   
    
    //Part 8
    cout<<"\n\nPart 8";
    int comp1, comp2;
    string comp1Choice, comp2Choice;
    
    srand(time(NULL));    
    do{
        comp1= rand()%3+1;
        comp2= rand()%3+1;
        
        switch(comp1){
            case 1:
                comp1Choice="Rock";
                break;
            case 2:
                comp1Choice="Paper";
                break;
            case 3:
                comp1Choice="Scissors";
                break;
        }          
 
        switch(comp2){
            case 1:
                comp2Choice="Rock";
                break;
            case 2:
                comp2Choice="Paper";
                break;
            case 3:
                comp2Choice="Scissors";
                break;
        }
        cout<<"\n\nPlayer 1 chooses "<<comp1Choice<<"\nPlayer 2 chooses "
                <<comp2Choice;

        if(comp1 == 1){
            if(comp2 == 1)cout<<"\nTie!";
            else if(comp2 == 2)cout<<"\nPlayer 2 wins!";
            else if(comp2 == 3)cout<<"\nPlayer 1 wins!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }   
        }else if(comp1 == 2){
            if(comp2 == 1)cout<<"\nPlayer 1 wins!";
            else if(comp2 == 2)cout<<"\nTie!";
            else if(comp2 == 3)cout<<"\nPlayer 2 wins!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }     
        }else if(comp1 == 3){
            if(comp2 == 1)cout<<"\nPlayer 2 wins!";
            else if(comp2 == 2)cout<<"\nPlayer 1 wins!";
            else if(comp2 == 3)cout<<"\nTie!";
            else{
                cout<<"\nPlayer 2 invalid choice";
            }            
        }else{
            cout<<"\nPlayer 1 invalid choice";
        }

        if((comp1==2 && comp2==1)||(comp1==1 && comp2==2)){
            cout<<"\nPaper covers rock!";
        }else if((comp1==1 && comp2==3)||(comp1==3 && comp2==1)){
            cout<<"\nRock breaks scissors!";
        }else if((comp1==3 && comp2==2)||(comp1==2 && comp2==3)){
            cout<<"\nScissors cut paper!";
        }else{
            cout<<"\nNobody wins!";
        }
        cout<<"\nWould you like to play again?(yes/no) ";
        cin>>ans;
    }while(ans == "yes");    
    
    
    //Part 9
    cout<<"\n\nPart9";
    int menuChoice;
    bool menuError= false;
    do{
        cout<<"\nType 1 for two player or 2 for computer players: ";
        cin>>menuChoice;
        if(menuChoice == 1 || menuChoice == 2){
            menuError=false;
        }else{
            cout<<"Invalid choice, please choose again";
            menuError=true;
        }
    }while(menuError);
    
    switch(menuChoice){
        case 1:
            do{
                cout<<"\nPlayer 1 enter P,R, or S: ";
                cin>>player1;
                cout<<"Player 2 enter P,R, or S: ";
                cin>>player2;

                if(player1 == 'S')player1 = 's';
                if(player1 == 'R')player1 = 'r';
                if(player1 == 'P')player1 = 'p';

                if(player2 == 'S')player2 = 's';
                if(player2 == 'R')player2 = 'r';
                if(player2 == 'P')player2 = 'p';

                if(player1 == 'r'){
                    if(player2 == 'r')cout<<"\nTie!";
                    else if(player2 == 'p')cout<<"\nPlayer 2 wins!";
                    else if(player2 == 's')cout<<"\nPlayer 1 wins!";
                    else{
                        cout<<"\nPlayer 2 invalid choice";
                    }   
                }else if(player1 == 'p'){
                    if(player2 == 'r')cout<<"\nPlayer 1 wins!";
                    else if(player2 == 'p')cout<<"\nTie!";
                    else if(player2 == 's')cout<<"\nPlayer 2 wins!";
                    else{
                        cout<<"\nPlayer 2 invalid choice";
                    }     
                }else if(player1 == 's'){
                    if(player2 == 'r')cout<<"\nPlayer 2 wins!";
                    else if(player2 == 'p')cout<<"\nPlayer 1 wins!";
                    else if(player2 == 's')cout<<"\nTie!";
                    else{
                        cout<<"\nPlayer 2 invalid choice";
                    }            
                }else{
                    cout<<"\nPlayer 1 invalid choice";
                }

                if((player1=='p' && player2=='r')||
                (player1=='r' && player2=='p')){
                    cout<<"\nPaper covers rock!";
                }else if((player1=='r' && player2=='s')||
                (player1=='s'&&player2=='r')){
                    cout<<"\nRock breaks scissors!";
                }else if((player1=='s' && player2=='p')||
                (player1=='p' && player2=='s')){
                    cout<<"\nScissors cut paper!";
                }else{
                    cout<<"\nNobody wins!";
                }
                cout<<"\nWould you like to play again?(yes/no) ";
                cin>>ans;
            }while(ans == "yes");         
        case 2:
        do{
            comp1= rand()%3+1;
            comp2= rand()%3+1;

            switch(comp1){
                case 1:
                    comp1Choice="Rock";
                    break;
                case 2:
                    comp1Choice="Paper";
                    break;
                case 3:
                    comp1Choice="Scissors";
                    break;
            }          

            switch(comp2){
                case 1:
                    comp2Choice="Rock";
                    break;
                case 2:
                    comp2Choice="Paper";
                    break;
                case 3:
                    comp2Choice="Scissors";
                    break;
            }
            cout<<"\n\nPlayer 1 chooses "<<comp1Choice<<"\nPlayer 2 chooses "
                    <<comp2Choice;

            if(comp1 == 1){
                if(comp2 == 1)cout<<"\nTie!";
                else if(comp2 == 2)cout<<"\nPlayer 2 wins!";
                else if(comp2 == 3)cout<<"\nPlayer 1 wins!";
                else{
                    cout<<"\nPlayer 2 invalid choice";
                }   
            }else if(comp1 == 2){
                if(comp2 == 1)cout<<"\nPlayer 1 wins!";
                else if(comp2 == 2)cout<<"\nTie!";
                else if(comp2 == 3)cout<<"\nPlayer 2 wins!";
                else{
                    cout<<"\nPlayer 2 invalid choice";
                }     
            }else if(comp1 == 3){
                if(comp2 == 1)cout<<"\nPlayer 2 wins!";
                else if(comp2 == 2)cout<<"\nPlayer 1 wins!";
                else if(comp2 == 3)cout<<"\nTie!";
                else{
                    cout<<"\nPlayer 2 invalid choice";
                }            
            }else{
                cout<<"\nPlayer 1 invalid choice";
            }

            if((comp1==2 && comp2==1)||(comp1==1 && comp2==2)){
                cout<<"\nPaper covers rock!";
            }else if((comp1==1 && comp2==3)||(comp1==3 && comp2==1)){
                cout<<"\nRock breaks scissors!";
            }else if((comp1==3 && comp2==2)||(comp1==2 && comp2==3)){
                cout<<"\nScissors cut paper!";
            }else{
                cout<<"\nNobody wins!";
            }
            cout<<"\nWould you like to play again?(yes/no) ";
            cin>>ans;
        }while(ans == "yes");
    }
    return 0;
}
