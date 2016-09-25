/* 
   File:  Savitch Chapter 1 Practice program #5 main
   Author: Raj Chipalu
   Created on September 18 , 2016, 5:00 pm
   Purpose: Calculate the total length of fence you would need to enclose a
rectangular area.   
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
    int wid_ft, hgt_ft, total_L;
    //Input values
    cout << "Press return after entering a number.\n";
    cout << "Please Enter the width of the rectangular area in feet:\n";
    
    cin >> wid_ft;//Width of the rectangular area. 
    
    cout << "Please Enter the height of the rectangular area in feet:\n";
    cin >> hgt_ft;//Height of the rectangular area. 
    
    //Process values -> Map inputs to Outputs
    total_L = (2*wid_ft) + (2*hgt_ft) ;//Equation to find the amount of fence needed in feet. 
    
    //Display Output
    cout << "Hello\n";
    cout << "If your rectangular area is  ";
    cout << wid_ft;
    cout << " feet of width\n";
    cout << "and ";
    cout << hgt_ft;
    cout << " feet high, then\n";
    cout << "you need ";
    cout << total_L;
    cout << "  feet of fencing to cover it.\n";
    cout << "Goodbye\n";

    //Exit Program
    return 0;
}