/*
  Q6.wap to find gratest among 3 numbers 
*/
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<("enter three numbers : ");
  cin>>a>>b>>c;
  if(a>b){
      if(a>c){
          cout<<endl<<a<<(" is greater");
      }
      else{
          cout<<endl<<c<<(" is greater");
      }     
  }
  else if(b>c){
      cout<<endl<<b<<(" is greater");
  }
  else{
      cout<<endl<<c<<(" is greater");
  }
  return 0;
}