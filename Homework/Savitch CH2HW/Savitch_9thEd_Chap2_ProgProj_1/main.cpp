/* 
   File:  Savitch Chapter 2 Practice program #1 main
   Author: Raj Chipalu
   Created on September 25 , 2016, 12:19pm
   Purpose: Your friend wants to know how much diet soda pop it is possible to 
 * drink without dying as a result. Write a program to supply the answer. 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include<cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float CAN = .35;//amount of sweetener in each can of soda. 
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float artkilm;//amount of artificial sweetener to kill mouse. 
    float massmou;//mass of the mouse. 
    float stpdiet;//amount of weight at which dieter will stop. 
    float swtdiet;//amount of sweetener that would kill dieter. 
    float amtdcan;//amount of diet soda cans to kill dieter. 
    
     
    //Input values
    while (stpdiet > 0)//If weight is greater than zero user can run as many times as they like. 
    {
    cout << "Press return after entering a number"<<endl;
    cout << "Enter the weight of the mouse in grams"<<endl;
    cin >> massmou;
    cout << "Enter the amount of artifical sweetener to kill a mouse"<<endl;
    cin >> artkilm;       
    cout << "Enter the weight at which dieter will stop the diet in grams"<<endl;
    cin >> stpdiet;
     
    //Process values -> Map inputs to Outputs
    swtdiet = ((artkilm/massmou) * stpdiet);//Calculation to find the amount of sweetner to kill dieter. 
    amtdcan = (swtdiet*CAN) ;//Calculation to find amount of cans to kill dieter. 
    
    //Display Output
    cout << "The amount of diet soda cans to kill the dieter is "<<endl;
    cout <<  amtdcan<<endl;
    }
  
   
    
    
    //Exit Program
    return 0;
}