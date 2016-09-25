/* 
   File:  Savitch Chapter 1 Program Projects Problem 4
   Author: Raj Chipalu
   Created on September 18 , 2016, 8:00pm
   Purpose: Write a program that allows the user to enter a time in seconds and then
outputs how far an object would drop if it is in freefall for that length of
time.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float GRAVITY=32.174;//Acceleration


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float time;  //Time as input in seconds
    float dftFell; //Distance in feet
    
    //Input values
    cout<<"Imput the time in free fall in seconds"<<endl;
    cin>>time;//Time it took the object to fall in seconds. 
    
    //Process values -> Map inputs to Outputs
    dftFell = GRAVITY*time*time/2;//Equation to find distance the object fell in freefall. 
            
    //Display Output
    cout<<"Gravity = "<<GRAVITY<<" ft/sec^2"<<endl;
    cout<<"Time fell = "<<time<<" seconds"<<endl;
    cout<<"Distance traveled = "<<dftFell<<" ft"<<endl;

    //Exit Program
    return 0;
}