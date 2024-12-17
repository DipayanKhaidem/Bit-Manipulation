#include<bits/stdc++.h>
using namespace std;

string convert2Binary(int n){
  string res="";
  while(n!=1)
  {
    if(n%2==1)
    {
      res+=to_string(1);
    }else{
      res+=to_string(0);
    }
    n=n/2;
  }
  reverse(res.begin(),res.end());
  return res;
}

int main(){
  int n,i=2;
  cout<<"Enter the number"<<endl;
  cin>>n;
  if(n&(1<<2)){
    cout<<"number is set";
  }else{
    cout<<"number is unset";
  }
  return 0;
}