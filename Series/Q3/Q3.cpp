/*
(3) 0 6 24 60 120 210
*/
#include<iostream>
using namespace std;
int main(){
  int i=1;
  while(i<=6){
    cout<<(i*i*i)-i<<" ";
    i++;
  }
  return 0;
}