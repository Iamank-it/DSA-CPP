/*
(7) 1⁄2 + 2/3 + 3⁄4 +........ + n/n+1
*/
#include<iostream>
using namespace std;
int main(){
  float i=1,s=0,n;
  cout<<"Enter the value of n : ";
  cin>>n;
  while(i<=n){
    s=s+(i/(i+1));
    i++;
  }
  cout<<"Sum of series : "<<s;
  return 0;
}