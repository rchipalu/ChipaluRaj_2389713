/* 
   File:  Savitch Chapter 3 Program Project #10 main
   Author: Raj Chipalu
   Created on October 11 , 2016, 10:00 am
   Purpose: Write a program that calculates the number of chocolate bars that 
 * should be consumed to maintain one’s weight for the appropriate sex of the 
 * specified weight, height, and age, and exercise amount. 
 */

//System Libraries
#include <iostream>//Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
 


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const float CHOCBAR = 230;//230 calories is one chocolate bar.
    float wght_p;//weight in pounds
    float hgt;//height in inches
    float age;//age in years
    float BMR_m;//BMR of the male
    float BMR_msed;//BMR of sedentary lifestyle/
    float BMR_msa;//BMR of somewhat active
    float BMR_mac;//BMR of Active lifestyle.
    float BMR_mha;//BMR of highly active.
    float BMR_f;//BMR of the female
    float BMR_fsed;
    float BMR_fsa;
    float BMR_fac;
    float BMR_fha;
    int cho_fsed; 
    int cho_fsa; 
    int cho_fac;  
    int cho_fha;  
    int cho_msed;  
    int cho_msa;  
    int cho_mac;        
    int cho_mha; 
    
    
    int cho_f;//Chocolate bars needed for the female
    int cho_m;//Chocolate bars needed for the male
    char gend;//Gender male or female
    char ans;
    
    
    
    
    //Input values
    cout << "Enter weight in pounds"<<endl;
    cin >> wght_p;
    
    cout << "Enter the height in inches"<<endl;
    cin >> hgt;
    
    cout << "Enter the age in years"<<endl;
    cin >> age;
    
    cout << "Enter the gender M or F"<<endl;
    cin >> gend;
    
    cout << "Please answer if you are :"<<endl;//allow user to enter which fits their appropriate exercise amount. 
    cout<<"a. Sedentary"<<endl;
    cout<<"b. Somewhat active (exercise occasionally)"<<endl;
    cout<<"c. Active (exercise 3–4 days per week)"<<endl;
    cout<<"d. Highly active (exercise every day)"<<endl;
    cin>>ans;
            
           
    
    
    
     //Process values -> Map inputs to Outputs
    BMR_f = (655 + (4.3 * wght_p)) +  ((4.7 * hgt) - (4.7 * age));//Calculate BMR for the female
    BMR_fsed = (BMR_f)*(1+.20); 
    BMR_fsa =  (BMR_f)*(1+.30); 
    BMR_fac =  (BMR_f)*(1+.40); 
    BMR_fha =  (BMR_f)*(1+.50); 
    BMR_m =  (66 + (6.3 * wght_p)) + ((12.9 * hgt) - (6.8 * age));//Calculate BMR for the male
    BMR_msed = (BMR_m)*(1+.20);
    BMR_msa =  (BMR_m)*(1+.30);
    BMR_mac =  (BMR_m)*(1+.40);
    BMR_mha =  (BMR_m)*(1+.50);
    cho_fsed = (BMR_fsed/CHOCBAR);//Calculate the amount of chocolate bars for the female.
    cho_fsa = (BMR_fsa/CHOCBAR);
    cho_fac = (BMR_fac/CHOCBAR);
    cho_fha = (BMR_fha/CHOCBAR);
    cho_msed = (BMR_msed/CHOCBAR);//Calculate the amount of chocolate bars for the male. 
    cho_msa = (BMR_msa/CHOCBAR);
    cho_mac = (BMR_mac/CHOCBAR);       
    cho_mha = (BMR_mha/CHOCBAR);      
    
     //Display Output
            if (gend == 'm' || gend == 'M') //if gender is male.
            {    
                switch (ans)//switch function depending on what multiple choice answer they selected. 
                {   case ('a'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_msed<<endl;
                                cout<<" to maintains ones weight for the male"<<endl;
                                break;
                    case ('b'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_msa;
                                cout<<" to maintains ones weight for the male"<<endl; 
                                break;
                    case ('c'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_mac;
                                cout<<" to maintains ones weight for the male"<<endl; 
                                break;
                    case ('d'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_mha;
                                cout<<" to maintains ones weight for the male"<<endl;  
                                break;
                }                
                
                
            }
    
            if (gend == 'f' || gend == 'F')//if gender answered is female. 
            
            {
                switch (ans)
                {   case ('a'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_fsed;
                                cout<<" to maintains ones weight for the female"<<endl; 
                                break;
                    case ('b'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_fsa;
                                cout<<" to maintains ones weight for the female"<<endl;  
                                break;                        
                    case ('c'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_fac;
                                cout<<" to maintains ones weight for the female"<<endl; 
                                break;
                    case ('d'):
                                cout<< "The number of chocolate bars that should be consumed is "<<endl;
                                cout<< cho_fha;
                                cout<<" to maintains ones weight for the female"<<endl;   
                                break;
                }                
                                                                
                                                                                        
                                                        
                        
            }
    
 

    //Exit Program
    return 0; 
} 




