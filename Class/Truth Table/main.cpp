/* 
   File:   Main
   Author: Raj Chipalu
   Created on September 26th, 2016, 9:41 AM
   Purpose:  Display the 13 columns of the Truth Table. 
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
    bool x,y;//boolean expression. 
    
    //Output the Heading of the truth table
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y\n";//headings of the truth table. 
    
    //Input values for first row of the truth table
    x=true;
    y=true;
    
    //Display the first row of the truth table
    cout<<(x?'T':'F')<<" ";//boolean 
    cout<<(y?'T':'F')<<"  ";//boolean
    cout<<(!x?'T':'F')<<"  ";//Not x
    cout<<(!y?'T':'F')<<"   ";//Not y
    cout<<(x&&y?'T':'F')<<"   ";//X and Y
    cout<<(x||y?'T':'F')<<"    ";//X or Y
    cout<<(x^y?'T':'F')<<"   ";//X to the Y
    cout<<(x^y^y?'T':'F')<<"     ";//Same as X. 
    cout<<(x^y^x?'T':'F')<<"      ";//Same as Y
    cout<<(!(x&&y)?'T':'F')<<"        ";//Not X and Y
    cout<<(!x||!y?'T':'F')<<"      ";//Not X or Not Y
    cout<<(!(x||y)?'T':'F')<<"      ";//Not X or Y
    cout<<(!x&&!y?'T':'F')<<"        ";//Not X and Not Y
    cout<<endl;
    
    //Input values for second row of the truth table
    y=false;
    
    //Display the second row of the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<endl;
    
    x=false;
    y=true;
    // Display the third row of the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<endl;
    
    y=false;
    // //Display the fourth row of the truth table
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<endl;        
            
            
    //Exit Program
    return 0;
}