/*
Q3. WAP to input the radius of any circle and find its area and perimeter.
*/
#include<iostream>
using namespace std;
int main(){
  float r;
  cout<<"Enter radius of a circle : ";
  cin>>r;
  cout<<endl<<"Area of a circle : "<<(3.14*r*r);
  cout<<endl<<"Perimeter of circle : "<<(2*3.14*r);
  return 0;
}