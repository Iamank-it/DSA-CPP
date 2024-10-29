/*
  Q8.wap to find gratest among 5 numbers 
*/
#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,e;
  cout<<("enter five numbers : ");
  cin>>a>>b>>c>>d>>e;
  if(a>b)
      if(a>c)
          if(a>d)
              if(a>e)
                  cout<<endl<<a<<(" is greater");
              else
                  cout<<endl<<e<<(" is greater");
          else if(d>e)
              cout<<endl<<d<<(" is greater");
              else
              cout<<endl<<e<<(" is greater");
      else if(c>d)
              if(c>e)
                  cout<<endl<<c<<(" is greater");
              else
                  cout<<endl<<e<<(" is greater");
          else if(d>e)
              cout<<endl<<d<<(" is greater");
              else
              cout<<endl<<e<<(" is greater");
  else if(b>c)
          if(b>d)
              if(b>e)
                  cout<<endl<<e<<(" is greater");
              else
                  cout<<endl<<e<<(" is greater");
          else if(d>e)
              cout<<endl<<d<<(" is greater");
              else
              cout<<endl<<e<<(" is greater");
      else if(c>d)
              if(c>e)
                  cout<<endl<<c<<(" is greater");
              else
                  cout<<endl<<e<<(" is greater");
          else if(d>e)
              cout<<endl<<d<<(" is greater");
              else
              cout<<endl<<e<<(" is greater");
  return 0;
}