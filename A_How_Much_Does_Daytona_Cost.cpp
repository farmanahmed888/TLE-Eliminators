#include<bits/stdc++.h>
using namespace std;

bool f(int n,int k,vector<int> a){
  for(int i=0;i<n;i++){
    if(a[i]==k) return true;
  }
  return false;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(f(n,k,a)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}