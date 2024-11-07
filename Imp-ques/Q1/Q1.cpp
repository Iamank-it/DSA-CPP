/*
Q1. WAP to input a number and check it is prime or not.
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  int c=0,i;
  for(i=1;i<=n;i++){
    if(n%i==0)
    c++;
  }
  if(c==2){
    cout<<endl<<"The number is Prime !";
  }
  else{
    cout<<endl<<"The number is not Prime !";
  }
  return 0;
}