/*
   12. Number pyramid
        1
       2 2
      3 3 3
     4 4 4 4
    5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){
  int i,j,k,r;
  cout<<("Enter number of rows : ");
  cin>>r;
  for(i=1;i<=r;i++){
      for(k=r;k>i;k--){
          cout<<(" ");
      }
      for(j=1;j<=i;j++){
          cout<<i<<" ";
      }
      cout<<endl;
  }
  return 0;
}