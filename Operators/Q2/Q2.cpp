/*
Q2. WAP to input principal amount, rate and time. Calculate its simple interest and compound interest.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (in %): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    
    double simpleInterest = (principal * rate * time) / 100;
    
    double compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;
    
    return 0;
}
