/* 
   File:  main
   Author: Raj Chipalu
   Created on October 6 2016, * 8:34  pm
   Purpose: Write a program that inputs the weight (in pounds) and radius (in feet)
 *  of a sphere and outputs whether the sphere will sink or float in water.
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float pie = 3.14;//value of pie
const float y = 62.4;//specific weight of water in lb per cubic feet. 


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float weight;//weight of object
    float buoy;//buoyancy 
    float rad;//radius of object
    
     
    //Input values
    cout<<"Please enter the weight in lbs"<<endl;
    cin>>weight;
    cout<<""<<endl;
    cout<<"Please enter the radius in ft"<<endl;
    cin>>rad;
    
   //Process values -> Map inputs to Outputs
    buoy = 62.4 * ((4 * pie * (rad*rad*rad))/3);//buoyancy equation. 
     
    
    //Display Output
    if (buoy >= weight)  
        {
            cout<<"The spherical object will float."<<endl;
            cout<<""<<endl;
        }
     
    else 
        {
            cout<<"The spherical object will sink."<<endl;
            cout<<""<<endl;
        }
        
   //Exit Program
    return 0;
}