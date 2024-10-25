/*
    A
    BB
    CCC
    DDDD
*/
#include<iostream>
using namespace std;
int main(){
  char i,j;
  for(i='A';i<'E';i++){
    for(j='A';j<=i;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}