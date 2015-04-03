/* 
 * File:   main.cpp
 * Author: Travis
 *
 * Created on April 3, 2015, 3:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


//Part 1
double powerinator(int power, double baseNum){
    double num=1.0;
    for(int i=0; i<power;i++){
        num *=baseNum;
    }  
    return num;
}

//part 2
bool leapYearinator(int year){
    bool leapYear;
    if(year%4 == 0)leapYear= true;
    else{leapYear= false;}
    if(year%100 == 0)leapYear =false;
    if(year%400 == 0)leapYear= true;
    return leapYear;
}

//Part 3


//Part 4
void swapinator(int& x, int& y){
    int z=y;
    y=x;
    x=z; 
}

//Part 5
bool palindrominator(string word){
      bool flag=false;
      int size = word.size();
      for(int i=0;i<(size/2);i++){
        if( word.substr(i,1)!= word.substr(size-(i+1),1) && flag<1){
          flag=true;
        }
      }
      return flag;
}

//Part 6

//Part 7

int main(int argc, char** argv) {

    
    
    return 0;
}

