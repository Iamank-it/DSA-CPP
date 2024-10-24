//Write a program to find size of datatypes

#include<iostream>
using namespace std;
int main(){
  int a=2;
  float b=2.2;
  char c='abc';
  double d=8.145;
  cout<<"Size of integer variable : "<<sizeof(a);
  cout<<endl<<"Size of float variable : "<<sizeof(b);
  cout<<endl<<"Size of character variable :"<<sizeof(c);
  cout<<endl<<"Size of double variable :"<<sizeof(d);
  return 0;
}