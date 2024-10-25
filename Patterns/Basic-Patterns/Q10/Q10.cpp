/*
    A B C
    B C D 
    C D E
*/
#include<iostream>
using namespace std;
int main(){
  char i,j;
  for(i='A';i<='C';i++){
    for(j=i;j<(i+3);j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}