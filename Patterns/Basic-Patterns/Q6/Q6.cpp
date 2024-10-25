/*
    1 2 3
    2 3 4
    3 4 5
*/
#include<iostream>
using namespace std;
int main(){
  int i,j,k=1;
  for(i=1;i<=3;i++){
    k=i;
    for(j=1;j<=3;j++){
      cout<<k<<" ";
      k++;
    }
    cout<<endl;
  }
  return 0;
}