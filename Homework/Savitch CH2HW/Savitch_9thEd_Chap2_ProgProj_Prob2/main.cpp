/* 
   File:  Savitch Chapter 2 Programming projects #2 main
   Author: Raj Chipalu
   Created on September 25 , 2016, 2:20pm
   Purpose: Write a program that takes an employee’s previous annual salary as
 *  input, and outputs the amount of retroactive pay due the em- ployee, 
 * the new annual salary, and the new monthly salary.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include<cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float INCR = .076;//Percentage of retroactive pay due. 
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float anualsa;//Past annual salary.
    float newansa;//New annual salary. 
    float retpay;//Retroactive pay due. 
    float monsal;//New monthly salary. 
    
     
    //Input values
    while (anualsa > 0){
    
    cout << "Press return after entering a number"<<endl;
    cout << "Enter the employees previous annual salary in dollars."<<endl;
    cin >> anualsa;
    
     
    //Process values -> Map inputs to Outputs
    retpay = (anualsa*INCR);//Calculate amount of retroactive pay due. 
    newansa = (retpay + anualsa);//Calculate new annual salary.       
    monsal = (newansa/12);//Calculate new monthly salary. 
    //Display Output
    
    cout << "The retroactive pay due is $";
    cout << retpay<<endl;
    cout << "The new annual salary of the employee is $";
    cout << newansa<<endl;
    cout << "The new monthly salary is $";
    cout << monsal<<endl;
    cout << ""<<endl;}
    
  
   
    
    
    //Exit Program
    return 0;
}