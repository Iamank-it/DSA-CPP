/*
  Q5. Write a c++ program to assign grades based on marks.
        Example: marks >= 90 -> A, 
          marks >= 80 -> B, 
          marks >= 70 -> C, 
          marks >= 60 -> D, 
          else -> F
*/
#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<("enter your marks : ");
  cin>>a;
  if(a>=90){
      cout<<endl<<("Your Grade is A");
  }
  else if(a>=80){
      cout<<endl<<("Your Grade is B");
  }
  else if(a>=70){
      cout<<endl<<("Your Grade is C");
  }
  else if(a>=60){
      cout<<endl<<("Your Grade is D");
  }
  else {
      cout<<endl<<("Your Grade is E");
  }
  return 0;
}