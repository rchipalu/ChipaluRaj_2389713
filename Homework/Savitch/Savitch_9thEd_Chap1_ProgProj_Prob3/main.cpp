/* 
   File:  Savitch Chapter 1 Program Projects Problem 3
   Author: Raj Chipalu
   Created on September 18 , 2016, 7:26 pm
   Purpose: Write a program that allows the user to enter a number of quarters, dimes,
and nickels and then outputs the monetary value of the coins in cents.
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
    int num_qts, num_dim, num_nic, tot_cent;
    //Input values
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    
    cin >> num_qts;
    
    cout << "Enter the number of dimes:\n";
    cin >> num_dim;
    
    cout << "Enter the number of nickels:\n";
    cin >> num_nic;
    
    
    //Process values -> Map inputs to Outputs
    tot_cent = (25 * num_qts) + (10 * num_dim) + (5 * num_nic);
    
    
    //Display Output
    cout << "The total amount the coins are worth is ";
    cout << tot_cent; 
    cout <<" cents";
    

    //Exit Program
    return 0;
}