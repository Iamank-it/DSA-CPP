/*
    11. Solid rhombus

        * * * * *
       * * * * *
      * * * * *
     * * * * *
    * * * * *
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
      for(j=1;j<=r;j++){
          cout<<("* ");
      }
      cout<<endl;
  }
  return 0;
}