/* 
   File:  
   Author: Raj Chipalu
   Created on October  3, 2016, 9:32am
   Purpose: 
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
    int Arabnum;
    int intnum;
    int m;  
    int D;
    int C;
    int L;
    int X;
    int V;
    int I;
    int N;
    
    
    
    //Input values
    cout<<"Please enter the year from 1000 to 3000";
    cin >> Arabnum;
    intnum = (int)Arabnum;
     
    //Process values -> Map inputs to Outputs
    m = intnum / 1000;
    D = ((intnum%1000)/500);
    C = ((intnum%500)/100);
    L = ((intnum%100)/50);
    X = ((intnum%50)/10);
    V = ((intnum%10)/5);
    I = (intnum%5);
     
    
           
     
    
    //Display Output
    if (m = 1)
    {
        cout<<"M";
        
        if (D > 0)   
        {
            cout << "D";
        }
    }
    
    
    if (m = 2)
        cout<<"MM";
                
    if (m = 3)
        cout<<"MMM";
    
    
    //Exit Program
    return 0; 
}  