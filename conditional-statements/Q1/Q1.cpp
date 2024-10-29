/*
Q1 .wap to identify weather input character is lowercase or upercase or numeric
*/
#include<iostream>
using namespace std;
int main(){
  char n;
  cout<<"Enter a character : ";
  cin>>n;
  if((n>=48)&&(n<58))
    cout<<endl<<"It is a number";
  else if((n>64)&&(n<=90))
    cout<<endl<<"It is a uppercase character";
  else if((n>=97)&&(n<=122))
    cout<<endl<<"It is a lowercase characrter";
  else
    cout<<endl<<"It is other character";
  return 0;
}