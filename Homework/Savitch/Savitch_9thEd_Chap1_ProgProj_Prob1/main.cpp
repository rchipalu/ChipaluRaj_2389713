/* 
   File:  Savitch Chapter 1 Programing Project #1 main
   Author: Raj Chipalu
   Created on September 18 , 2016, 4:00 pm
   Purpose:  Create a code that reads in two integers and then outputs both their
sum and their product
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
    int num_one, num_two, tot_sum, tot_prod;
    //Input values
    cout << "Press return after entering a number.\n";
    cout << "Please Enter the first integer:\n";
    
    cin >> num_one;
    
    cout << "Please Enter the second integer:\n";
    cin >> num_two;
    
    //Process values -> Map inputs to Outputs
    tot_sum = num_one + num_two ;
    tot_prod = num_one * num_two;
    
    //Display Output
  
      cout << "The sum of the integers is  ";
      cout << tot_sum;
    
      cout << "\nThe product of the integers is ";
      cout << tot_prod;
 

    //Exit Program
    return 0;
}