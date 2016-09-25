/* 
   File:  Savitch Chapter 2 Practice program #3 main
   Author: Raj Chipalu
   Created on September 24 , 2016, 10:25pm
   Purpose: Write a program that starts with a quantity in mph and converts the 
 * quantity into minutes and seconds per mile to find the pace.    
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include<cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float mph ;  //miles per hour of the treadmill entered by user. 
    int   intmin;//Amount of minutes per mile. 
    float   sec; //Amount of seconds added to the minutes. 
    float fminsec;//Both minutes and seconds. 
    //Input values
    cout << "Press return after entering a number"<<endl;
    cout << "Enter the speed of the treadmill in mph"<<endl;
    cin  >> mph;
     
    //Process values -> Map inputs to Outputs
    fminsec = 60/mph;//calculate the minutes and seconds. 
    intmin = 60/mph; //calculate just the minutes. 
    sec = (fminsec - intmin) * 10;//calculation to find the seconds. 
    
    //Display Output
    cout << "The pace of the treadmill is ";
    cout << intmin; 
    cout << "minutes and ";
    cout << sec;
    cout << "seconds ";
   
           
            
    
   
    
    
    //Exit Program
    return 0;
}

