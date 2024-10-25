/*
    A
    BC
    CDE
    EFGH
*/
#include<iostream>
using namespace std;
int main(){
  char i,j,k='A';
  cout<<k<<endl;
  for(i='B';i<'E';i++){
    for(j='A';j<=i;j++){
      k++;
      cout<<k<<" ";
    }
    k--;
    cout<<endl;
  }
  return 0;
}