/* 
   File:  main
   Author: Raj Chipalu
   Created on October 19 , 2016,10:10 pm
   Purpose: All the ways to save. 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>     // Power function, Exponential, Log as well
#include <iomanip>  //dol

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PERCENT = 100.0f;
   

//Function prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float pv, intRate;
    int nComp;
    
    
    
    //Input values
    pv = 100.0f;            //$100
    intRate = 8/100.0f;     //8%
    nComp=9;                //9 years
    
    
   
     
    //Process values -> Map inputs to Outputs then Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value =$"<<pv<<endl;
    cout<<"Interest Rate = "<<intRate<<"%/year"<<endl;
    cout<<"Years in Account = "<<nComp<<"years"<<endl;
    cout<<"Future Value  (power)    =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Exp,Log)   =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future Value (For Loop)   =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Recursion)   =$"<<save1(pv,intRate,nComp)<<endl;
    
    //Display Output
  
   
    
    
    //Exit Program
    return 0; 
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings ****************************************
//Purpose:  PSHow rule of 72
//Inputs:   Inputs to the function here
// p-> Intial balance in $'s
// i-> Decimal value for the interest/year
// n-> Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
// Savings after n compounding periods with i interest rate and p principale. 
//******************************************************************************


float save4(float p,float i, int n){
    if (n<=0) return p;
    return save4(p,i,n-1)*(1+i);
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings ****************************************
//Purpose:  PSHow rule of 72
//Inputs:   Inputs to the function here
// p-> Intial balance in $'s
// i-> Decimal value for the interest/year
// n-> Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
// Savings after n compounding periods with i interest rate and p principale. 
//******************************************************************************

float save3(float p,float i, int n){
    float fv=p;
    for (int year = 1;year<=n;year++){
    return fv;
        }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings ****************************************
//Purpose:  PSHow rule of 72
//Inputs:   Inputs to the function here
// p-> Intial balance in $'s
// i-> Decimal value for the interest/year
// n-> Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
// Savings after n compounding periods with i interest rate and p principale. 
//******************************************************************************


float save2(float p, float i, int n){ 
    return p*exp(n*log(1+1));
}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings ****************************************
//Purpose:  PSHow rule of 72
//Inputs:   Inputs to the function here
// p-> Intial balance in $'s
// i-> Decimal value for the interest/year
// n-> Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
// Savings after n compounding periods with i interest rate and p principale. 
//******************************************************************************

float save1(float p,float i,int n){
    return p*pow((1+i),n);
}
 