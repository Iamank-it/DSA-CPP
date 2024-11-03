/*
Q4. WAP to input two numbers and perform addition, substraction and multiplication using switch statement
*/
#include<iostream>
using namespace std;

int main(){
  int a,b,n;
  cout<<"Enter two number : ";
  cin>>a>>b;
  cout<<"Press 1 for addition\nPress 2 for substraction\nPress 3 for multiplication\n";
  cin>>n;
  switch(n){
  case 1 :
    cout<<endl<<"Addition : "<<a+b;
    break;
  case 2 : 
    cout<<endl<<"Substraction : "<<a-b;
    break;
  case 3 : 
    cout<<endl<<"Multiplication : "<<a*b;
    break;
  default : 
    cout<<endl<<"Invalid input !";
    break;
  }
  return 0;
}