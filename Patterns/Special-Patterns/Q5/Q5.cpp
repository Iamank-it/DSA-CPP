/*
    5. Inverted half pyramid rotated by 180 degree

        *
       **
      ***
     ****
    *****
*/

#include<iostream>
using namespace std;
int main(){
  int i,j,k,n;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(i=0;i<n;i++){
    for(k=i;k<n;k++){
      cout<<"  ";
    }
    for(j=0;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}