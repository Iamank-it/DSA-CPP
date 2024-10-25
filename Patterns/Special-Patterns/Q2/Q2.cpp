/*
    2. Hollow rectangle

    * * * * *
    *       *
    *       *
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
      if(i==0||j==0||i==(n-1)||j==4){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
  return 0;
}