/*
    1. Solid rectangle :

    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/
#include<iostream>
using namespace std;
int main(){
  int n,i,j;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<5;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}