/*
    7.Inverted half pyramid with number

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/

#include<iostream>
using namespace std;
int main(){
  int i,j,n;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}