/* 
   File:  main
   Author: Raj Chipalu
   Created on October 10  , 2016, 10:53 pm
   Purpose: Write a program that finds the temperature that is the same in 
 * both Celsius and Fahrenheit.
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
    int celsius;//Celsius value
    int fahren;//Fahrenheight value
    celsius = 100;//Initialization of Celsius. 
  
     
    //Input values
   
     
    //Process values -> Map inputs to Outputs
    cout<<"Celsius ";
    cout<<"Fahrenheit"<<endl;
    
    do
    {
        celsius-- ;//decreasing Celsius
        fahren = (((9 * celsius )/5)+32); 
        cout<<"";
        cout<<celsius;
        cout<<"             ";
        cout<<fahren<<endl;
        
    }while (celsius != fahren);//continue until Celsius is equal to Fahrenheight. 
        
        
        
    //Display Output

        cout <<"The temperature below 100 which is equal in both Celsius and Fahrenheight is";
        cout <<celsius<<endl;
        
    //Exit Program
    return 0;     
} 