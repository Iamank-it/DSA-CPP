/*
Q3. wap to check whether a number is even or odd
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  if(n%2==0){
    cout<<endl<<"The number is even";
  }
  else{
    cout<<endl<<"The number is odd";
  }
  return 0;
}