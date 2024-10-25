/*
    A A A
    B B B
    C C C
*/
#include<iostream>
using namespace std;
int main(){
  char i,j;
  for(i='A';i<='C';i++){
    for(j='A';j<='C';j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}