/* 
   File:   main
   Author: Raj Chipalu
   Created on October 17th, 11:30 PM
   Purpose:  Midterm 
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
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1 for a program to create an X "<<endl;
        cout<<"2.  Type 2 for a program that puts a star for the coinciding number. "<<endl;
        cout<<"3.  Type 3 for a program that will write a check "<<endl;
        cout<<"4.  Type 4  for a program that wilL give you a choice of three packages."<<endl;
        cout<<"5.  Type 5  for a program that will calculate the gross pay"<<endl;
        cout<<"6.  Type 6  for a program that outputs the sum of a series.  "<<endl;
        cout<<""<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
            }
                break;
            case 2:{char number1;
     int numberd1;//integer value of the first digit. 
     char number2;//char value of the first digit. 
     int numberd2;
     char number3;
     int numberd3;
     char number4; 
     int numberd4;
     string sign1;
     string sign2;
     string sign3;
     string sign4;
     
     
  
    //Input values
    cout<<"This program outputs stars for the coinciding number."<<endl;
    cout<<"Please enter the first digit "<<endl;
    cin >> number1;
    cout<<"Please enter the second digit "<<endl;
    cin >> number2;
    cout<<"Please enter the third digit "<<endl; 
    cin >> number3;
    cout<<"Please enter the fourth digit "<<endl; 
    cin >> number4; 
    
    //Process Values 
      numberd1 = number1 - '0';//converting a char into an integer. 
      numberd2 = number2 - '0';
      numberd3 = number3 - '0';
      numberd4 = number4 - '0';
      
    
    
    //Display Output
      
      if (numberd1 <=9)//number 1 - 9. 
        {    
          ;//Get the first digit. 
         
         for (int y = 0; y < numberd1; y++)  
            {   sign1 += '*';   
             
            }
           cout<<numberd1;cout <<sign1<<endl; 
        }
           else 
           {
               cout<<number1;cout<<"?";cout<<(int)number1<<endl;
           }
 
      if (numberd2 >0 && numberd2<=9)
        {    
           
         
         for (int y = 0; y < numberd2; y++)  
            {   sign2 += '*';   
             
            }
           cout<<numberd2;cout <<sign2<<endl; 
        }
           else 
           {
               cout<<number2;cout<<"?";cout<<(int)number2<<endl;
           }
      
      if (numberd3 >0 && numberd3<=9)
        {    
           
         
         for (int y = 0; y < numberd3; y++)  
            {   sign3 += '*';   
             
            }
           cout<<numberd3;cout <<sign3<<endl; 
        }
           else 
           {
               cout<<number3;cout<<"?";cout<<(int)number3<<endl;
           }
      
      if (numberd4 >0 && numberd4<=9)
        {    
           
         
         for (int y = 0; y < numberd4; y++)  
            {   sign4 += '*';   
             
            }
           cout<<numberd4;cout <<sign4<<endl; 
        }
           else 
           {
               cout<<number4;cout<<"?";cout<<(int)number4<<endl;
           }
     
     
    
    //Exit Program
    return 0; 
                
                break;
            }
            case 3:{    //Declaration of Variables
    string date;//date on the check
    string accountf;
    string payeef;//first name 
    string payeel;//last name
    string accntf;
    string accntl;
    unsigned short amount;
    unsigned char n1000s, n100s, n10s, n1s;
    
     
    //Input values
    cout<<"This program outputs a check"<<endl;
    cout<<"Please enter the date in (xxxxxx) format"<<endl;
    cin>>date;
    cout<<"Please enter the payees fist name"<<endl;
    cin>>payeef;
    cout<<"Please enter the payees last name"<<endl;
    cin>>payeel;
    cout<<"Please enter the account holders first name"<<endl;
    cin>>accntf;
    cout<<"Please enter the account holders last name"<<endl;
    cin>>accntl;
    cout<<""<<endl;
    cout<<"Please enter the amount total for the check in dollars from 1 to 2999 "<<endl;
    cout<<"$";
    cin>>amount; 
    
    
    //Display Output
    cout<<accntf;cout<<"";cout<<accntl<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE ZIP"; cout<<"              ";cout<<"Date: "; cout<<date;
    cout<<""<<endl;
    cout<<"Pay to the Order of :";cout<<"   ";cout<<payeef;cout<<"";cout<<payeel;
    cout<<""<<endl;
    //thousands first
    n1000s=amount/1000;//get the amount of thousands.  
    switch(n1000s){
        case 2: cout<<"two thousand";
        case 1: cout<<"one thousand";
    }
    
    //100's next
    amount%=1000;//Drop the 1000's
    n100s=amount/100;
    switch(n100s){
        case 9: cout<<"Nine Hundred";break;
        case 8: cout<<"Eight Hundred ";break;
        case 7: cout<<"Seven Hundred";break;
        case 6: cout<<"Six Hundred";break;
        case 5: cout<<"Five Hundred";break;
        case 4: cout<<"Four Hundred";break;
        case 3: cout<<"Three Hundred";break;
        case 2: cout<<"Two Hundred";break;
        case 1: cout<<"One Hundred";break;
        
    }
    
    //10's next
    amount%=100;//Drop the 100's
    n10s=amount/10;
    switch(n10s){
        case 9: cout<<"Ninety";break;
        case 8: cout<<"Eighty";break;
        case 7: cout<<"Seventy";break;
        case 6: cout<<"Sixty";break;
        case 5: cout<<"Fifty";break;
        case 4: cout<<"Forty";break;
        case 3: cout<<"Thirty";
        case 2: cout<<"Twenty";
        case 1: cout<<"Ten";
        
    }
    
    //10's next
    amount%=10;//Drop the 10's
    n1s=amount/1;
    switch(n1s){
        case 9: cout<<"Nine";break;
        case 8: cout<<"Eight";break;
        case 7: cout<<"Seven";break;
        case 6: cout<<"Six";break;
        case 5: cout<<"Five";break;
        case 4: cout<<"Four";break;
        case 3: cout<<"Three";
        case 2: cout<<"Two";
        case 1: cout<<"One";
    }

    
    cout<<" and no/100s Dollars"; cout<<"                        BANK OF CSC5"<<endl;
    cout<<""<<endl;
    cout<<"FOR: GOTTA PAY THE RENT";cout<<"       ";cout<<payeef;cout<<" ";cout<<payeel; 
            
    
  
   
    
    
    //Exit Program
    return 0; 
                break;
            
            }
            case 4:{    //Declaration of Variables
    char choice; 
    float hours; //hours using package. 
    float packa1;//package one
    float packa2;
    float packa3; 
    float packb1;//package two
    float packb2;
    float packb3;
    float packc1;//package three
    float ans1; 
    float ans2; 
    float ans3; 
 
     
    
    
     
     
  
    //Input values
      cout<<"This program allows you to pick a package and shows which will be the best"<<endl;
    cout<<"Please enter the package you would like (a, b, c)"<<endl;
    cin >> choice; 
    cout<<"Please enter the amount of hours you are using"<<endl;
    cin >> hours; 
    
    
 
  
    //Process Values
    
    packa1 = 16.75 ;//calculating package price for a. 
    packa2 = (16.75) + (.85*(hours-5)); 
    packa3 = 16.75  + (.85*15) + (hours-20); 
    packb1 = 23.75 ;//calculating package price for b. 
    packb2 = (23.75) + (.65*(hours-15)); 
    packb3 = (23.75) + (.65*(10)) + (hours-25);
    packc1 = 34.95;
    
   
    
    
    //Display Output
    if (hours <= 5)
    {
        ans1 = 16.75;
        ans2 = 23.75;
        ans3 = 34.95 ;      
    }
    
    if (hours <= 15 && hours >=5 )
    {
        ans1 = packa2;
        ans2 = 23.75;
        ans3 = 34.95 ;      
    }
    if (hours<=20 && hours <=15)
    {
        ans1 = packa2;
        ans2 = packb2;
        ans3 = 34.95;        
    }
    if (hours >=20 && hours <=25)
    {   
        ans1 = packa3;
        ans2 = packb2;
        ans3 = 34.95;
    }
    
    if (hours >25)
    {
        ans1 = packa3;
        ans2 = packb3;
        ans3 = 34.95;
    }
    
    switch (choice)
    {case 'a':
            cout<<"Your Monthly Bill is $";
            cout<<ans1<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package B you would have saved $";
            cout<<ans2-ans1<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package C you would have saved $";
            cout<<ans3-ans1<<endl;
            cout<<""<<endl;
            break;
        case 'b':
            cout<<"Your Monthly Bill is $";
            cout<<ans2<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package A you would have saved $";
            cout<<ans1-ans2<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package C you would have saved $";
            cout<<ans3-ans2<<endl;
            cout<<""<<endl;
            break;
        case 'c' :       
            cout<<"Your Monthly Bill is $";
            cout<<ans3<<endl;
            cout<<""<<endl;
            cout<<"If you had chosen package A you would have saved $";
            if (ans1 > ans3)
            {
                cout<<ans1-ans3<<endl;
            }
            else 
            {
                cout<<ans3 - ans1<<endl;
            }
            cout<<""<<endl;
            cout<<"If you had chosen package B you would have saved $";
            if (ans2 > ans3)
            {
                cout<<ans2-ans3<<endl;
            }
            else 
            {
                cout<<ans3 - ans2<<endl;
            }
            cout<<""<<endl;
            break;        
                    
            
      
    }        
    
    if (ans1 < ans3 && ans1 < ans2)
    {
        cout<<"You should stay/switch to package a"<<endl;
    }
    
    if (ans2 < ans3 && ans2 < ans1)
    {
        cout<<"You should stay/switch to package b"<<endl;
    }
    
    if (ans3 < ans2 && ans3  <ans1)
    {
        cout<<"You should stay/switch to package c"<<endl;
                
    }
      
                
       
            
    //Exit Program
    return 0; 
                
                break;
            }

            case 5:{
                    //Declaration of Variables
    float hours;//the amount of hours worked. 
    float ratep;//standard rate pay. 
    float firshr;
    float sechr;
    float thirdhr;
    //Input values
    cout<<"This program determines the gross pay"<<endl;
    cout<<"Please enter the amount of hours worked"<<endl;
    cin>>hours;
    cout<<"Please enter the rate of pay per hour in dollars"<<endl;
    cout<<"$";
    cin>>ratep;
    cout<<""<<endl;
    

    
    

    //Process values -> Map inputs to Outputs
    firshr = (ratep * hours);
    sechr = (ratep * 40) + ((hours-40)*(2 *ratep)); 
    thirdhr = (ratep * 40) + ((10 * (2 *ratep))) + ((hours-50)*(3*ratep));
    
    //Display Output
    if (hours < 40)
    {
        cout<<"The gross pay is "<<endl;
        cout<<"$";
        cout<<firshr<<endl;
    }
    
    else if (hours > 40 && hours < 50)
    {
        cout<<"The gross pay is "<<endl;
        cout<<"$";
        cout<<sechr;
    }
    else if (hours >= 50)
    {
        cout<<"The gross pay is "<<endl;
        cout<<"$";
        cout<<thirdhr;
                
    }
  
   //Exit Program
    return 0; 
   
                break;
            }
            case 6:{    //Declaration of Variables
    float x;//inputed x value
    float sum;//finding the sum of the sequence. 
    float factorial;//factorial value
    float n1;//the number of nth terms. 
    
    
     
     
  
    //Input values
    cout<<"Please enter a value for x"<<endl;
    cin>>x;
    cout<<"Please enter a value for n"<<endl;
    cin>>n1;
    
    
    
  
    //Process Values 
     
    for (int n = 0; n<=n1; n++)
    {
        sum = 1;
        factorial = 1;  
        for (int m = 1;m<=n; m++)
        {
           factorial += factorial * m;   
        }
    
        sum = sum + pow(-1,n)*pow((x),(2*n))/factorial;   
     
    
    }
    
    
    
    
    //Display Output
      
    cout<<sum<<endl;
  
     
    
    //Exit Program
    return 0; 
                
                break;
            }
       
            }//End Case
        //End the Switch/Case
    }while (menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}