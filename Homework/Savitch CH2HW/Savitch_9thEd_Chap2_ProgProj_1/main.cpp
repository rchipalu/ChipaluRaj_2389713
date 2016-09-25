/* 
   File:  Savitch Chapter 2 Practice program #1 main
   Author: Raj Chipalu
   Created on September 25 , 2016, 12:19pm
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include<cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float ARTSWT= 0.001;
const int CAN = 350;//
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int artkilm;
    int massmou;
    float stpdiet;
    float swtdiet;
    int amtdcan;
    
     
    //Input values
    while (stpdiet > 0)//If the weight of the cereal is greater than zero, user can run as many times as they want. 
    {
    cout << "Press return after entering a number"<<endl;
    cout << "Enter the weight of the mouse in grams"<<endl;
    cin >> massmou;
    cout << "Enter the amount of artifical sweetener to kill a mouse"<<endl;
    cin >> artkilm;       
    cout << "Enter the weight at which dieter will stop the diet in grams"<<endl;
    cin >> stpdiet;
     
    //Process values -> Map inputs to Outputs
    swtdiet = ((artkilm/massmou) * stpdiet);
    amtdcan = (swtdiet)/CAN ;
    
    //Display Output
    cout << "The amount of diet soda cans to kill the dieter is "<<endl;
    cout <<  swtdiet<<endl;
    }
  
   
    
    
    //Exit Program
    return 0;
}