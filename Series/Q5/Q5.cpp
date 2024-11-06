/*
(5) 1 2 4 8 16 32
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int i=0;
  while (i<=5)
  {
    cout<<pow(2,i)<<" ";
    i++;
  }
  
  return 0;
}