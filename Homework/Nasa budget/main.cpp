/* 
   File:   main
   Author: Raj Chipalu
   Created on September  , 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT = 100;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float fedBdgt = 3.99e12f;
    float NASBdgt = 1.92e10f;
    float pNASA;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    pNASA = NASBdgt / fedBdgt * PERCENT;
    
    //Display Output
    cout << "Federal Budget for 2016 = $" << fedBdgt << endl;
    cout << "NASA budget for 2016 = $" << NASBdgt << endl;
    cout << "The percent spent on Nasa = %" << pNASA << endl;
    
    //Exit Program
    return 0;
}