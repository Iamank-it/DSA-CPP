/*
    Q7.wap to input a number and print its table 
*/

#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter a number to print its table : ";
  cin>>n;
  for(i=1;i<=10;i++){
    cout<<endl<<n<<" x "<<i<<" = "<<i*n;
  }
  return 0;
}