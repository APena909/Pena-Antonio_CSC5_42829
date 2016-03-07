/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * Created on March 7, 2016, 9:41 AM
 * Purpose: Calculate Monthly Payment
 */

#include <iostream>
#include <cmath> 
using namespace std;

int main(int argc, char** argv) {

    float loanamt;//Total loan amount
    float intrate;//Interest rate per year in decimal value
    int nmonpay;//Number of monthly payments
    float mon_pay;//Monthly payment amount
    
    
    cout << "Calculate the monthly payment on a loan with a given interest rate.\n";
    
    cout << "Enter the total loan amount: $";
    cin >> loanamt;
    
    cout << "Enter the interest rate per year(%): ";
    cin >> intrate;
    
    cout << "Enter the number of monthly payments: ";
    cin >> nmonpay;
    
    
    return 0;
}

