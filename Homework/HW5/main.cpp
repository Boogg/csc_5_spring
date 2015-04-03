/* 
 * File:   main.cpp
 * Author: Travis
 *
 * Created on April 3, 2015, 1:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

//part 2
int maxinator(int x, int y){
 if(x<y)x=y;
 return x;
}

//Part 4
int thriceinator(int x){
    return x*3;
}

//part 5
int squareinator(int x){
    return (x*x);
}

//Part 6
int lengthinator(string xString){
    return xString.size();
}

//Part 7

int main(int argc, char** argv) {

   //Part 1
    cout<<"Part 1\n\n";
    int num1 =0;
    int num2 =0;
    
    srand(time(NULL));
    
    for(int i=0;i<5;i++){
       num1 = rand()%100;
       num2 = rand()%100;
       cout<<"{"<<num1<<", "<<num2<<"}";
       if(num1<=num2)num1=num2;
       cout<<" highest # is: "<<num1<<endl;
    }
    
    //Part 3
    cout<<"\nPart 3\n\n";
  
    for(int i=0;i<5;i++){
       num1 = rand()%100;
       num2 = rand()%100;
       cout<<"{"<<num1<<", "<<num2<<"}";
       cout<<" highest # is: "<<maxinator(num1, num2)<<endl;
    }
    
  
    
    return 0;
}



