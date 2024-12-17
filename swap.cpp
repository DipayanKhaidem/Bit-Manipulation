#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter two numbers"<<endl;
  cin>>a>>b;

  cout<<"The two  numbers before swapping are"<<endl;
  cout<<"a="<<a<<" "<<"b="<<b<<endl;

  a=a^b;
  b=a^b;
  a=a^b;

  cout<<"The numbers after swapping are"<<endl;
  cout<<"a="<<a<<" "<<"b="<<b;
}