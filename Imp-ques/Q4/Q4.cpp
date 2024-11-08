/*
Q4. WAP to input a number and find all the prime number between 5 to 100.
*/
#include<iostream>
using namespace std;
int main(){
  int i;
  for(i=5;i<=100;i++){
    int j,c=0;
    for(j=1;j<=i;j++){
      if(i%j==0)
      c++;
    }
    if(c==2){
      cout<<i<<" ";
    }
  }
  return 0;
}