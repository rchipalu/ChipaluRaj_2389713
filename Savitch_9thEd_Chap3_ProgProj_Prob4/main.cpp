/* 
   File:  main
   Author: Raj Chipalu
   Created on October  8, 2016,3:18 pm
   Purpose: Write a program that scores a blackjack hand. 
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
    
    int amtcards;//amount of cards user has
    int val;//taking the char value into a int
    int totval = 0;
    char cardval;//char value entered by the user
    char ans;
    
    //Input Values
        cout<<"Enter the amount of cards you have (2-5)"<<endl;
    cin >> amtcards;
        cout<<""<<endl;
    for (int n = 1; n <= amtcards; n++)
    {
        cout <<"Enter the value of the card (2-9) or T for 10,  J for Jack,  Q for Queen, "
                "     K for King, and put A for Ace, please put Ace last if you have it"<<endl;
        cin  >>cardval;
        cout<<""<<endl;
        
        switch (cardval)//switch value of the value of cards 
        {    
            case '2':
                val = 2;
                cout <<"The value of the card  ";
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
            
            case '3':
                val = 3;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break;
            
            case '4':
                val = 4;
                cout <<"The value of the card  ";
                
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
            
            case '5':
                val = 5;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
            
            case '6':
                val = 6;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
             
            case '7':
                val = 7;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
                
            case '8':
                val = 8;
                cout <<"The value of the card  ";
                
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
            
                
            case '9':
                val = 9;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
                
            case 'T': 
            case 't':    
                val = 10;
                cout <<"The value of the card  ";
                
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
            
            case 'J':
            case 'j'://case if value is a Jack
                val = 10;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
                
            case 'q'://case if value is a queen. 
            case 'Q':
                val = 10;
                cout <<"The value of the card  ";
               
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
             
            case 'k':
            case 'K': //case of a King
                val = 10;
                cout <<"The value of the card  "; 
                
                cout<<"is"<<endl;
                cout<<val<<endl;
                cout<<""<<endl;
                totval = val + totval;
                break; 
          
            case 'A'://case where it is an Ace
            case 'a':
                    if (totval <=10) 
                    {  
                        val = 11;
                    }     
                    else
                    {
                        val = 1;
                    }
                    cout <<"The value of the card is";
                    cout <<val<<endl;
                    cout<<""<<endl;
                    totval = totval + val;
                    n++;
            }
        

            
                
        }   
        
        
   //Process values -> Map inputs to Outputs
    
   

    
    //Display Output
               if ( totval <= 21)  
                {
                cout<< "total value of the cards is "<<endl;
                cout <<totval<<endl; 
                } 
            else 
            {    
                cout <<"Busted"<<endl;
            }
        
      
    
       
    
               
                
                
                
            
    //Exit Program
    return 0;    
}      