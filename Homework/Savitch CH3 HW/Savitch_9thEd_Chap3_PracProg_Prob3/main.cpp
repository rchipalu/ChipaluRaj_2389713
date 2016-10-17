/* 
   File:  main
   Author: Raj Chipalu
   Created on October 5 , 2016, 11:00 pm
   Purpose: Write an astrology program. The user types in a birthday, and the 
 * program responds with the sign and horoscope for that birthday. 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables   
    int month;//month that you were born.
    int date;//day that you were born.
    
     
    //Process values -> Map inputs to Outputs
    cout<<"Please enter the day of the month you were born"<<endl;
    cin>>date;
    cout<<"Please enter the month you were born"<<endl;
    cin>>month;
    
    if(month == 3) 
        {  
            if ( date >=21)
            {
               cout<<"Your horoscope sign is a Aries"<<endl;
               if (date == 21 || date == 22)
               {
                   cout<<"You are a cusp baby with the adjacent sign Pieces."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Pisces"<<endl;
                if (date == 19 || date ==20) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Aries."<<endl;
                } 
    
            }
            
        }     
    
    else if(month == 4) 
        {  
            if ( date >= 20)
            {
               cout<<"Your horoscope sign is a Taurus"<<endl;
               if (date == 20 || date == 21)
               {
                   cout<<"You are a cusp baby with the adjacent sign Aries."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Aries"<<endl;
                if (date == 19 || date ==18 ) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Taurus."<<endl;
                } 
    
            }
            
        }  
    
    else if(month == 5) 
        {  
            if ( date >=1 && date <=20)
            {
               cout<<"Your horoscope sign is a Taurus"<<endl;
               if (date == 20 || date == 19)
               {
                   cout<<"You are a cusp baby with the adjacent sign Gemini."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Gemini"<<endl;
                if (date == 22 || date ==23) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Taurus."<<endl;
                } 
    
            }
            
        }  
        
    else if(month == 6) 
        {  
            if ( date <=21)
            {
               cout<<"Your horoscope sign is a Gemini"<<endl;
               if (date == 21 || date == 20)
               {
                   cout<<"You are a cusp baby with the adjacent sign Taurus."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Cancer"<<endl;
                if (date == 22 || date ==23) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Gemini."<<endl;
                } 
    
            }
            
        }  
        
     else  if(month == 7) 
        {  
            if ( date <=22)
            {
               cout<<"Your horoscope sign is a Cancer"<<endl;
               if (date == 22 || date == 21)
               {
                   cout<<"You are a cusp baby with the adjacent sign Leo."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Leo"<<endl;
                if (date == 23 || date ==24) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Cancer."<<endl;
                } 
    
            }
            
        }  
    
        if(month == 8) 
        {  
            if ( date <=22)
            {
               cout<<"Your horoscope sign is a Leo"<<endl;
               if (date == 22 || date == 21)
               {
                   cout<<"You are a cusp baby with the adjacent sign Virgo."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Virgo"<<endl;
                if (date == 23 || date ==24) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Leo."<<endl;
                } 
    
            }
            
        }  
    
    if(month == 9) 
        {  
            if ( date <=22)
            {
               cout<<"Your horoscope sign is a Virgo"<<endl;
               if (date == 22 || date == 21)
               {
                   cout<<"You are a cusp baby with the adjacent sign Libra."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Libra"<<endl;
                if (date == 23 || date ==24) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Virgo."<<endl;
                } 
    
            }
            
        }  
    if(month == 10) 
        {  
            if ( date <=22)
            {
               cout<<"Your horoscope sign is a Libra"<<endl;
               if (date == 22 || date == 21)
               {
                   cout<<"You are a cusp baby with the adjacent sign Scorpio."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Scorpio"<<endl;
                if (date == 23 || date ==24) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Libra."<<endl;
                } 
    
            }
            
        }  
    
    if(month == 11) 
        {  
            if ( date <=21)
            {
               cout<<"Your horoscope sign is a Scorpio"<<endl;
               if (date == 21 || date == 22)
               {
                   cout<<"You are a cusp baby with the adjacent sign Saggittarius."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Saggittarius"<<endl;
                if (date == 23 || date ==23) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Scorpio."<<endl;
                } 
    
            }
            
        }  
    if(month == 12) 
        {  
            if ( date <=21)
            {
               cout<<"Your horoscope sign is a Saggittarius"<<endl;
               if (date == 21 || date == 20)
               {
                   cout<<"You are a cusp baby with the adjacent sign Capricorn."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Capricorn"<<endl;
                if (date == 22 || date ==23) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Saggittarius."<<endl;
                } 
    
            }
            
        }  
    if(month == 1) 
        {  
            if ( date <=19)
            {
               cout<<"Your horoscope sign is a Capricorn"<<endl;
               if (date == 19 || date == 18)
               {
                   cout<<"You are a cusp baby with the adjacent sign Aquarius."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Aquarius"<<endl;
                if (date == 20 || date ==21) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Capricorn."<<endl;
                } 
    
            }
            
        }  
    if(month == 2) 
        {  
            if ( date <=18)
            {
               cout<<"Your horoscope sign is a Aquarius"<<endl;
               if (date == 18 || date == 17)
               {
                   cout<<"You are a cusp baby with the adjacent sign Pisces."<<endl;
               }   
            }
            else
            {
                cout<<"Your horoscope sign is a Pisces"<<endl;
                if (date == 19 || date ==20) 
                { 
                   cout<<"You are a cusp baby with the adjacent sign Aquarius."<<endl;
                } 
    
            }
            
        }  
              
              
              
              
              //Display Output
   
   
    
    
    //Exit Program
    return 0;
}