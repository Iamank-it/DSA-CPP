/*
    Q5.wap to input a number and print prime number upto that number
*/
#include<iostream>
using namespace std;
int main(){
  int i,n,j,c=0;
  cout<<"Enter the value of n : ";
  cin>>n;
  cout<<endl<<"Prime number :";
  for(i=1;i<=n;i++){
    c=0;
    for(j=1;j<=i;j++){
      if(i%j==0)
      c++;
    }
    if(c==2){
      cout<<i<<" ";
    }
  }
  return 0;
}