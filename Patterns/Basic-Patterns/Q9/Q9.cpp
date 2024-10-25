/*
    A B C
    D E F
    G H I
*/
#include<iostream>
using namespace std;
int main(){
  char i,j,k='A';
  for(i='A';i<='C';i++){
    for(j='A';j<='C';j++){
      cout<<k<<" ";
      k++;
    }
    cout<<endl;
  }
  return 0;
}