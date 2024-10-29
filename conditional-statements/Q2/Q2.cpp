/*
  Q2. wap to check whether user is eligible to vote or not
*/
#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<("Enter your age : ");
  cin>>a;
  if(a>=18)
  {
      cout<<endl<<("You are eligible to vote");
  }
  else
  {
      cout<<endl<<("You are not eligible to vote");
  }
  return 0;
}