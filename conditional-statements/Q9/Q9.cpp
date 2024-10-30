/*
Q9. WAP to input a number and check it is positive or negative.
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  if(n>0){
    cout<<endl<<"It is a positive number ";
  }
  else if(n<0){
    cout<<endl<<"It is a negetive number ";
  }
  else{
    cout<<endl<<"The number is zero";
  }
  return 0;
}