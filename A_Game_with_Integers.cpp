#include<bits/stdc++.h>
using namespace std;

bool f(int n){
  return n%3!=0;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    //if vanya wins return true
    if(f(n)){
      cout<<"First"<<endl;
    }else{
      cout<<"Second"<<endl;
    }
  }
}