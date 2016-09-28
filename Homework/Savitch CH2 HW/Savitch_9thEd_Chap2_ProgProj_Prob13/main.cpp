/* 
   File:  Savitch Chapter 2 Program Project #8 main
   Author: Raj Chipalu
   Created on September 27 , 2016, 11:55 pm
   Purpose: Write a program that calculates the number of chocolate bars that 
 * should be consumed to maintain one’s weight for the appropriate sex of the 
 * specified weight, height, and age. 
 */

//System Libraries
#include <iostream>//Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float CHOCBAR = 230;//230 calories is one chocolate bar. 


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float wght_p;//weight in pounds
    float hgt;//height in inches
    float age;//age in years
    float BMR_m;//BMR of the male
    float BMR_f;//BMR of the female
    int cho_f;//Chocolate bars needed for the female
    int cho_m;//Chocolate bars needed for the male
    char gend;//Gender male or female
    
    
    
    
    //Input values
    cout << "Enter weight in pounds"<<endl;
    cin >> wght_p;
    
    cout << "Enter the height in inches"<<endl;
    cin >> hgt;
    
    cout << "Enter the age in years"<<endl;
    cin >> age;
    
    cout << "Enter the gender M or F"<<endl;
    cin >> gend;
           
    
    
    
     //Process values -> Map inputs to Outputs
    BMR_f = (655 + (4.3 * wght_p)) +  ((4.7 * hgt) - (4.7 * age));//Calculate BMR for the female
    BMR_m =  (66 + (6.3 * wght_p)) + ((12.9 * hgt) - (6.8 * age));//Calculate BMR for the male
    cho_f = (BMR_f/CHOCBAR);//Calculate the amount of chocolate bars for the female.
    cho_m = (BMR_m/CHOCBAR);//Calculate the amount of chocolate bars for the male. 
    
    
     //Display Output
            if (gend == 'm' || gend == 'M') 
            {    
                cout << "The number of chocolate bars that should be consumed is ";
                cout << cho_m<<endl;
                cout << "to maintain one’s weight for the male. "<<endl;
            }
    
            if (gend == 'f' || gend == 'F')
            {    
                cout << "The number of chocolate bars that should be consumed is ";
                cout << cho_f<<endl;
                cout << "to maintain one's weight for the female."<<endl;
            }
        
        
                 
     
        
    
    
            
          
                
                         
            
                             
                        
                        //Exit Program
    return 0;
}




