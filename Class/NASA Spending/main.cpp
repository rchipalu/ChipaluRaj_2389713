/* 
   File:   main
   Author: Raj Chipalu
   Created on September 12, 9:41 AM
   Purpose:  Calculate the NASA Budget as percentage of Federal Budget
    Federal Budget -> $3.999 trillion from 
        https://en.wikipedia.org/wiki/2016_United_States_federal_budget
    NASA Budget -> $19.2 billion from
        http://www.planetary.org/blogs/casey-dreier/2015/1216-nasa-gets-an-extraordinary-budget-in-2016.html
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;  //Conversion to percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float nasBdgt=19.2e9f;   //See reference from above
    float fedBdgt=3.999e12f;//See reference from above
    float pNasSpd;          //Percentage Nasa spending
    
    //Process values -> Map inputs to Outputs
    pNasSpd=nasBdgt/fedBdgt*PERCENT;
    
  
    
    //Display Output
    cout<<"The Nasa Budget for 2016 = $"<<nasBdgt<<endl;
    cout<<"The Federal Budget for 2016  = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on Nasa = "<<pNasSpd<<"%"<<endl;
    
    //Exit Program
    return 0;
}