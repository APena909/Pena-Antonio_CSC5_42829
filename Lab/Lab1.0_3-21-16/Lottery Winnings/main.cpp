/* 
 * Antonio Peña
 * March 21, 2016
 * Purpose: Calculate your actual lottery winnings after Lump Sum Penalty,
 * Tax Penalty, and Marriage Equity.
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here

int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare Variables
    float lumSumP = 0.62; //Lump Sum Penalty
    float taxPen = 0.52; //Tax Penalty
    float marrEq = 0.50; //Marriage Equity
    int lotto; //Jackpot amount
    float lotto1; //Jackpot after Lump Sum Penalty
    float lotto2; //Jackpot after Tax Penalty
    float lotto3; //Jackpot afterMarriage Equity

    //Input the total Jackpot amount
    cout << "Enter the total amount of millions that you THINK "
            "you'll be winning:" << endl;
    cin>>lotto;

    //Calculate the actually winnings
    lotto1 = lotto - (lotto * lumSumP);
    lotto2 = lotto1 - (lotto1 * taxPen);
    lotto3 = lotto2 / 2;

    //Output the results
    cout << "After calculating the Lump Sum Penalty, Tax Penalty, and Marriage Equity, " << endl;
    cout << "you will receive: $" << lotto3 << endl;


    return 0;
}

