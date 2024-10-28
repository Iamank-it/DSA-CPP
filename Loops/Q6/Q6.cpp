/*
    Q6.wap to convert fahrenheit to celcius
*/
#include<iostream>
using namespace std;
int main()
{
    float n ;
    cout<<"Enter Temperature in fahrenheit : ";
    cin>>n;
    cout <<"\nTemperature in celcius : "<<((n - 32.0) * 5.0 / 9.0);
    return 0;
}