/* 
   File:  main
   Author: Raj Chipalu
   Created on October 10 2016, 4:57 pm
   Purpose: Write a program that accepts a year written as a four-digit Arabic 
 * (ordi- nary) numeral and outputs the year written in Roman numerals.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    
    string rnumeral;//string function of the Roman numeral. 
    int year;//year to be converted
    int placeh;//placeholder of each digit in the year. 
   
    
 
    
    
    //Input values
     cout<<"Please enter the year to be converted to Roman Numerals"<<endl;
     cin >> year; 
     
   
     
    //Process values -> Map inputs to Outputs
     if (year >=1000 && year <=3000)//Year should be between 1000 and 3000
        {    
         placeh = (year/1000);//Get the first digit. 
         
         for (int y = 0; y < placeh; y++) 
            {   rnumeral += 'M';  
             
            }
         
         
        }  
     year %= 1000;//Work in the hundred  place. 
     if (year >= 100)  
        {
         placeh = (year / 100);
         if (placeh == 9) 
         { 
           rnumeral += "CM";  
         }
         
         else if (placeh >= 5) 
        {
         rnumeral += 'D'; 
         
            for (int i = 0; i < placeh - 5; i++)  
            { 
                rnumeral += 'C';   
            } 
         
        }
         else if (placeh == 4) 
         {
         rnumeral += "CD";
         }
         else if (placeh >= 1) 
         {
             for (int i = 0; i < placeh; i++)  
             {
                 rnumeral += 'C';
             }
              
         }
        
     }
     
      year%= 100;//work in the tens place. 
     
     if (year >= 10) 
        {
         placeh = (year/10);
         if (placeh == 9)
         {
             rnumeral += "XC";
             
         }
         
         else if (placeh >= 5)
         {
             rnumeral += 'L' ;
             
             for (int i = 0; i < placeh - 5; i++)
             {
              rnumeral += 'X';
             
             }
        }
         else if (placeh ==4) 
         {
             rnumeral += "XL";
         }
         
         else if (placeh >=1) 
         {
             for (int i = 0; i<placeh;i++)
             {
                 rnumeral += 'X'; 
             } 
             
             
         }
        
        }
      year%= 10;
     if (year >=1) 
         {
             placeh = year; 
             if (placeh == 9)
             {
                 rnumeral += "IX";
             }
             
             else if (placeh >= 5) 
             {
                 rnumeral += "V";
             
             
                    for (int i = 0; i < placeh - 5;i++)
                    {
                        rnumeral += 'I';
                    }
             }
         
             
             else if (placeh == 4) 
             {
                 rnumeral += "IV";
             }
             
             else if (placeh >= 1)
             {
                 for (int i = 0; i < placeh; i++) 
                     rnumeral += 'I';
                 {
                     
                 }
             }
         }
     
    
       
   
     
     
    
    //Display Output
    cout<<"The Roman numeral is ";
    cout<<rnumeral<<endl;//display the total conversion. 
   

        
  
    
    
    //Exit Program
    return 0;
}