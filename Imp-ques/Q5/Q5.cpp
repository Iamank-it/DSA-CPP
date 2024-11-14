/*
Q5. WAP to input a number and find its reverse.
*/
#include<iostream>
using namespace std;
int main(){
  int n,s=0,r;
  cout<<"Enter a number :";
  cin>>n;
  while(n!=0){
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  cout<<"\nReverse of number : "<<s;
  return 0;
}