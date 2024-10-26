/*
    9. 0-1 triangle

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include<iostream>
using namespace std;
int main(){
  int i,j,n,k=1;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(i=1;i<=n;i++){
    if(i%2==0)
    k=0;
    else
    k=1;
    for(j=1;j<=i;j++){
      cout<<k<<" ";
      if(k==0)
      k=1;
      else
      k=0;
    }
    cout<<endl;
  }
  return 0;
}