/*
    10. Butterfly Pattern
    //for even number of rows 
    
    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *

    //for odd number of rows

    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *
*/
#include<iostream>
using namespace std;
int main(){
  int r,i,j,c,k,d;
      cout<<("Enter number of rows : ");
      cin>>r;
      c=r/2;
      if(r%2==0)
      d=r/2;
      else
      d=(r/2)+1;
      for(i=1;i<=d;i++){
          for(j=1;j<=i;j++){
              cout<<("* ");
          }
          for(k=d;k>i;k--){
              cout<<("  ");
          }
          for(k=d;k>i;k--){
              cout<<("  ");
          }
          for(j=1;j<=i;j++){
              cout<<("* ");
          }
          cout<<endl;
      }
      
      if(r%2==0){
      for(i=c;i>=1;i--){
          for(j=1;j<=i;j++){
              cout<<("* ");
          }
          for(k=i;k<c;k++){
              cout<<("  ");
          }
          for(k=i;k<c;k++){
              cout<<("  ");
          }
          for(j=1;j<=i;j++){
              cout<<("* ");
          }
          cout<<endl;
      }
  }
  else{
      for(i=c;i>=1;i--){
          for(j=1;j<=i;j++){
              cout<<("* ");
          }
          for(k=i;k<d;k++){
              cout<<("  ");
          }
          for(k=i;k<d;k++){
              cout<<("  ");
          }
          for(j=1;j<=i;j++){
              cout<<("* ");
          }
          cout<<endl;
      }
  }
  return 0;
}