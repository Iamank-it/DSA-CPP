/*
(9) 1 + 1/3 + 1/5 + ......up to n- terms.
*/
#include<iostream>
using namespace std;
int main(){
  float i=1,s=0,n;
  cout<<"Enter the value of n : ";
  cin>>n;
  while(i<=n){
    s=s+(1/i);
    i+=2;
  }
  cout<<"Sum of series : "<<s;
  return 0;
}