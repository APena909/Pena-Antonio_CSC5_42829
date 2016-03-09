/* 
 * Antonio Peña
 * March 9, 2016
 * Purpose: Calculate the new annual/monthly salary after pay increase.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float perc_inc(0.076);//Percentage of increase
    float Osalary;//Old annual salary
    float OmSalry;//Old monthly salary
    float Nsalary;//New annual salary
    float NmSalry;//New monthly salary
    float BackPay;//Back pay
    int Bpayper;//Back pay period
     
    //Input current salary
    cout<<"Enter your previous annual salary:"<<endl;
    cin>>Osalary;
    
    //Enter back pay period in months
    cout<<"Enter the back pay period in months:"<<endl;
    cin>>Bpayper;
    
    //Calculations
    OmSalry=Osalary/12;//Old monthly salary = Old Annual salary/12 months
    Nsalary=Osalary*(1+perc_inc);//New Annual Salary = Old annual salary*percinc
    NmSalry=Nsalary/12;//New monthly salary = New annual salary/12 months
    BackPay=(Nsalary-Osalary)/12;//Back pay
    
    //Output the results
    cout<<"Original Annual Salary = $"<<Osalary<<""<<endl;
    cout<<"New Annual Salary = $"<<Nsalary<<""<<endl;
    cout<<"Old Monthly Salary = $"<<OmSalry<<""<<endl;
    cout<<"New Monthly Salary = $"<<NmSalry<<""<<endl;
    cout<<"Back Pay amount = $"<<BackPay<<""<<endl;
          
    //Exit Stage Left
    return 0;
}

