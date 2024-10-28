/*
    Q8. WAP to display odd and even numbers between 5 to 50 and also display its sum separately.
*/
#include<iostream>
using namespace std;
int main(){
  int i,s1=0,s2=0;
  cout<<"Odd numbers : "<<endl;
  for(i=5;i<=50;i+=2){
    cout<<i<<" ";
    s1=s1+i;
  }
  cout<<endl<<"Even numbers : "<<endl;
  for(i=6;i<=50;i+=2){
    cout<<i<<" ";
    s2=s2+i;
  }
  cout<<endl<<"Sum of odd numbers : "<<s1;
  cout<<endl<<"Sum of even numbers : "<<s2;
  return 0;
}