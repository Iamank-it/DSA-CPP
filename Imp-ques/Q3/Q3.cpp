/*
Q3. WAP to display all Armstrong numbers between 123 to 999.
*/  
#include<iostream>
using namespace std;
int main(){
  int i;
  for(i=123;i<=999;i++){
    int a=i,s=0;
    a=i;
    int r;
    while(a!=0){
      r=a%10;
      s=s+(r*r*r);
      a=a/10;
    }
    if(s==i)
    cout<<s<<" ";
  }
  return 0;
}