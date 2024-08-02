#include<bits/stdc++.h>
using namespace std;

bool f(int n,vector<int> a){
  map<int,int>mp;
  for(int i=0;i<n;i++){
    mp[a[i]]++;
  }
  if(mp.size()>=3){
    return false;
  }else if(mp.size()==2){
    auto a = mp.begin()->second;
    auto b = mp.rbegin()->second;
    if(abs(a-b)<=1){
      return true;
    } 
  }else{
    return true;
  }
  return false;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(f(n,a)){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
}