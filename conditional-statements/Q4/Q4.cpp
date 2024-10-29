/*
Q4.wap to check whether two numbers are less than or greater than or equal to each other
*/
#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter first number : ";
  cin>>a;
  cout<<endl<<"Enter second number : ";
  cin>>b;
  if(a<b){
    cout<<endl<<a<<" is less than "<<b;
  }
  else if(a>b){
    cout<<endl<<a<<" is greater than "<<b;
  }
  else{
    cout<<endl<<a<<" is equal to "<<b;
  }
  return 0;
}