/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * March 30, 2016
 * Purpose: Calculate how many years to retire using "while" loop
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float salary=6e4f;//$60,000
    float percDep=1e-1f;//10% to save each year
    float pv=0.0;//present value
    float iRate=0.05f;//interest rate
    float nComp;//Number of compounding periods by rule of 72
    int   nYears=0;//Comparison of calculation to the rule of 72
    float fv=pv;//Future value
    float yrlyDep;//Yearly Deposit in $'s
    float savRet;//Savings to retire in $'s
    
    //Calculate the approximate savings required to retire and yearly deposit
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //Output the initial conditions and setup table
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal Bond Purchase = "<<yrlyDep<<endl;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    
    //Loop each year until the future value is 2x the present value
    while(fv<savRet){
        fv*=(1+iRate);//Yearly interest rate calculation
        nYears++;     //Increment the number of years
        fv+=yrlyDep;
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    }   
    
    //Exit Stage Right!
    return 0;
}

