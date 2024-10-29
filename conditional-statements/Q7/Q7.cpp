/*
  Q7.wap to find gratest among 4 numbers
*/
#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cout<<("enter four numbers : ");
  cin>>a>>b>>c>>d;
  if(a>b){
      if(a>c){
          if(a>d){
              cout<<endl<<a<<(" is greater");
          }
          else{
              cout<<endl<<d<<(" is greater");
          }
      }
  else if(c>d){
          cout<<endl<<c<<(" is greater");
      }
      else{
          cout<<endl<<d<<(" is greater");
      }
  }
  else if(b>c){
      if(b>d){
          cout<<endl<<b<<(" is greater");
      }
      else{
          cout<<endl<<d<<(" is greater");
      }
  }
  else if(c>d){
      cout<<endl<<c<<(" is greater");
  }
  else{
      cout<<endl<<d<<(" is greater");
  }
  return 0;
}