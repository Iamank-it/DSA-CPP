/*
(8) 1+ 2/2! + 3/3! +....... + n/n!
*/
#include<iostream>
using namespace std;
int fact(int a){
  int i,s=1;
  for(i=1;i<=a;i++){
    s=s*i;
  }
  return s;
}
int main(){
  float i=1,s=0,n;
  cout<<"Enter the value of n : ";
  cin>>n;
  while(i<=n){
    s=s+(i/fact(i));
    i++;
  }
  cout<<"Sum of series : "<<s;
  return 0;
}