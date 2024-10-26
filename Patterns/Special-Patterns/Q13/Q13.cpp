/*
    13. Palindrome Pattern

        1
       212
      32123
     4321234
    543212345
*/
#include<iostream>
using namespace std;
int main(){
  int i,j,k,r;
  cout<<("Enter number of rows : ");
  cin>>r;
  for(i=1;i<=r;i++){
      for(k=r;k>i;k--){
          cout<<("  ");
      }
      for(j=i;j>=1;j--){
          cout<<(j)<<" ";
      }
      for(j=2;j<=i;j++){
          cout<<(j)<<" ";
      }
      cout<<endl;
  }
  return 0;
}