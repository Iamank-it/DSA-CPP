/*
Q2.wap to input a number and print sum of number upto that number 
*/
#include<iostream>
using namespace std;
int main(){
  int n,i,sum=0;
  cout<<"Enter a number : ";
  cin>>n;
  for(i=1;i<=n;i++){
    cout<<i<<" ";
    sum=sum+i;
  }
  cout<<"\nSum of number : "<<sum;
  return 0;
}