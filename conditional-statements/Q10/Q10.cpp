/*
Q10. WAP to input the marks of three subject (Out of 100) and calculate its percentage,total marks,total distinction in subjects and display fail if he/she gets marks less
than 30 in any one of the subjects.
*/
#include<iostream>
using namespace std;
int main(){
  int a,b,c,d=0,t;
  cout<<"Enter marks of first subject : ";
  cin>>a;
  cout<<endl<<"Enter marks of second subject : ";
  cin>>b;
  cout<<endl<<"Enter marks of third subject : ";
  cin>>c;  
  t=a+b+c;
  cout<<endl<<"Total marks : "<<t;
  cout<<endl<<"Percentage : "<<(t/3);
  if(a>85)
  d++;
  if(b>85)
  d++;
  if(c>85)
  d++;
  cout<<endl<<"Total distinction : "<<d;
  if(a<30||b<30||c<30)
  cout<<endl<<"Fail !";
  else
  cout<<endl<<"Pass !";
  return 0;
}