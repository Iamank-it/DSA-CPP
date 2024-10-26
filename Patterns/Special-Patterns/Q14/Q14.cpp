/*
    14. Diamond Pattern

        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
    
*/
#include<iostream>
using namespace std;
int main(){
  int n,i,j,k,r,d;
  cout<<("enter number of rows : ");
  cin>>n;
  r=n/2;
  if(n%2==0){
      r=r-1;
  }
  for(i=1;i<=r+1;i++){
      for(k=r;k>=i;k--){
          cout<<("  ");
      }
      for(j=1;j<2*i;j++){
          cout<<("* ");
      }
      cout<<endl;
  }
  if(n%2==0){
      d=r+1;
  }
  else
  d=r;
  for(i=d;i>=1;i--){
      for(k=r;k>=i;k--){
          cout<<("  ");
      }
      for(j=1;j<2*i;j++){
          cout<<("* ");
      }
      cout<<endl;
  }
  return 0;
}