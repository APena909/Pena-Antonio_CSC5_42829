/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * March 28, 2016
 * Purpose: To illustrate rule of 72 by way of while loop
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
    //Declare Variables
    float pv=100;//present value
    float iRate=0.05f;//interest rate
    float nComp;//Number of compounding periods by rule of 72
    int nYears=0;//Comparison of calculation to the rule of 72
    float fv=pv;//Future value
    
    //Calculate the approximate number of years to double the rule of 72
    nComp=(0.72f/iRate);
    
    //Output the initial conditions and setup table
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    
    //Loop each year until the future value is 2x the present value
    while(fv<2*pv){
        fv*=(1+iRate);//Yearly interest rate calculation
        nYears++;     //Increment the number of years
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    }
    
    //Output the results
    cout<<"By the rule of 72 it will take "<<nComp<<" years to double"<<endl;
    cout<<"The Future value = $"<<fv<<endl;
    cout<<"The number of years to more than double = "<<nYears<<endl;
    
    //Exit Stage Right!
    return 0;
}

