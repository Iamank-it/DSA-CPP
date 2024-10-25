/*
    1
    23
    456
    78910
*/
#include<iostream>
using namespace std;
int main(){
  int i,j,k=1;
  for(i=1;i<5;i++){
    for(j=1;j<=i;j++){
      cout<<k<<" ";
      k++;
    }
    cout<<endl;
  }
  return 0;
}