/*
Q4.wap to input a number and print sum of odd number upto that number 
*/
#include<iostream>
using namespace std;
int main(){
  int i,n,sum=0;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(i=1;i<=n;i+=2){
    cout<<i<<" ";
    sum=sum+i;
  }
  cout<<"\nSum of number : "<<sum;
  return 0;
}