/* 
   File:  main
   Author: Raj Chipalu
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
   
    float money; 
    float tot; 
    float diff;
    float d;
    float n;
    float q; 
    float dollar;
  
     
    //Input values
    

   
     
    //Process values -> Map inputs to Outputs 
     float d = .10;
    float n = .5 ;
    float dollar = 1;
    tot = d + n + 1 + dollar;  
    diff = 3.50 - tot; 
   
   
    
    
    //Display Output

  
    if (tot>3.50) 
    {   
        cout<<"Please enjoy your deep fried twinkie"<<endl;
        cout<<"Your change is"<<endl;
        cout<<diff;
    }
    //Exit Program
    return 0; 
} 