#include<bits/stdc++.h>
using namespace std;

bool f(int n,int m){
  if(n==m) return true;
  if(n%3!=0) return false;
  return f(n/3,m) or f(n-n/3,m);
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m; 
    if(f(n,m)){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}