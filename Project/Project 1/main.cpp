
/* 
   File:  main
   Author: Raj Chipalu
   Created on October 28 , 2016, pm
   Purpose: Create a zombie fighting game. 
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
     char choice;//choice of attack
     int init;//initialization
     int health;//health of the user
     int zomh; //health of the zombie
     int attack; //attack 
     int defense; //defense
     int speed; //speed of user
     int zomatt;//zombies attack
     int zomdef;//zombies defense
     int zomspd; //zombies speed
     int damage; //damage done by user
     int zombdam; //damage done by the zombie
     char ans;
     
     do {
     //Input values
    srand(unsigned(time(0)));
    init = rand()%2+1;
    zomh = rand()%40+60;
    health = rand()%40+80;
    if (init == 1)
    {
    }
   
     cout<<"Welcome to Zombie Outbreak"<<endl;
     cout<<"In this game you will be fighting a zombie that is trying to take"<<endl;
     cout<<"over your town."<<endl; 
     cout<<"This game will randomly select yours and the zombies health"<<endl;
     cout<<"Use your abilities to take down and kill the zombie. "<<endl;
     cout<<"The zombie is not expecting you, so you have the first attack"<<endl;
     cout<<"How would you like to attack?"<<endl;
     while (health > 0 && zomh > 0)//while loop
     {
     cout<<"Press 1 if you would like to sword attack"<<endl;
     cout<<"Press 2 if you would like to to use magic"<<endl;
     cout<<"Press 3 if you would just like to do a light attack"<<endl;
     cout<<""<<endl;
     cin >> choice;          
     cout<<""<<endl;
     //Process Values 
     attack = 20;
     defense = 10;
     speed = 10;
     zomatt = 15;
     zomdef = 15; 
     zomspd = 5;
    
    
    
    //Display Output
     
     switch (choice){//switch function
        case 1:
            attack = rand()%20+10;//randomization of attack
            defense = rand()%10+10;
            speed = rand()%7;
            break;
        case 2:
            attack = rand()%5+10;
            defense = rand()%10+10;
            speed = rand()%15;
            break;
        case 3:
            attack = rand()%10+10;
            defense = rand()%20+10;
            speed = rand()%5;
            break;
        }
     choice = rand()%3;//choice by the zombie. 
 
        switch (choice){
        case 1:
            zomatt = rand()%20+10;
            zomdef = rand()%10+10;
            zomspd = rand()%3;
            break;
        case 2:
            zomatt = rand()%5+10;
            zomdef = rand()%10+10;
            zomspd = rand()%4;
            break;
        case 3:
            zomatt = rand()%10+10;
            zomdef = rand()%20+10;
            zomspd = rand()%5;
            break;
        }
        
    cout<<"Your starting health is ";
    cout<<health<<endl;
    cout<<""<<endl;

    cout<<"The zombies starting health is ";
    cout<<zomh<<endl;
    cout<<""<<endl;
            
     zombdam = (attack - speed) - (zomdef/attack);//damage done by the zombie. 
     
      if (zombdam < 0) 
      { 
                 zombdam = 0;
      }
      zomh = zomh - zombdam; 
      
      cout <<"You have inflicted ";
      cout <<zombdam; 
      cout <<" damage to the zombie "<<endl;
      cout<<""<<endl;
      cout<<"The zombie has ";
      cout<< zomh;
      cout<<" health remaining"<<endl;
      cout<<""<<endl;
     
     damage = (zomatt - speed) - (defense / zomatt);
     
     if (damage < 0)
     {
         damage = 0;
     }
      
     health = health - damage;
      
     
     cout<< "The zombie has inflicted ";
     cout<< damage; 
     cout<<" on you."<<endl;
     cout<<""<<endl;
             
     cout<< "You still have ";
     cout<<health;
     cout<<" amount of health left"<<endl;
     cout<<""<<endl;
     
    }
       if (health < 1)
     {
         cout <<"You are now dead. The zombie still has ";
         cout<<zomh;
         cout<<" Health left"<<endl;
     }
     
         if (zomh < 1)
      {
          cout<<"You have beaten the zombie, congratulations you have saved the town."<<endl;
          cout<<"And you still have ";
          cout<<health;
          cout<<" left!"<<endl;
      }
     
   cout<<""<<endl;  
   cout<<"Would you like to play again? Press Y for yes or N for no"<<endl;
   cin>>ans;
   cout<<""<<endl;
     }while (ans == 'Y' || ans == 'y');
     
     
     
     
    //Exit Program
    return 0; 
}  
