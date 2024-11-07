/*
Q2. WAP to input a number and check it is palindrome or not.
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  int a=n,r,s=0;
  while(a!=0){
    r=a%10;
    s=(s*10)+r;
    a=a/10;
  }
  if(s==n){
    cout<<endl<<"The number is Palindrome !";
  }
  else{
    cout<<endl<<"The number is not Palindrome !";
  }
  return 0;
}