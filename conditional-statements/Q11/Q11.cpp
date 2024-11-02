/*
Q11. WAP to input three numbers and find the greatest
            (i) By using nested if statement
            --> solved in question no. 6
            (ii) By using Ternary Operator
*/
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter three numbers : ";
  cin>>a>>b>>c;
  cout<<endl<<"Greatest no : "<<((a>b)?((a>c)?a:c):((b>c)?b:c));
  return 0;
}