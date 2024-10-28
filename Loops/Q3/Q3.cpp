/*
Q3.wap to input a number and print sum of even number upto that number 
*/
#include<iostream>
using namespace std;
int main(){
  int i,n,sum=0;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(i=2;i<=n;i+=2){
    cout<<i<<" ";
    sum=sum+i;
  }
  cout<<"\nSum of number : "<<sum;
  return 0;
}