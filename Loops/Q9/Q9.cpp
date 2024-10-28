/*
    Q9. WAP to display and the sum of all numbers between 15 to 100, which is divisible
    by 7.
*/
#include<iostream>
using namespace std;
int main(){
  int i,s1=0;
  cout<<"Numbers divisible by 7 are : "<<endl;
  for(i=15;i<=100;i++){
    if(i%7==0){
      cout<<i<<" ";
      s1=s1+i;
    }
  }
  cout<<endl<<"Sum of all numbers between 15 to 100 : "<<s1;
  return 0;
}