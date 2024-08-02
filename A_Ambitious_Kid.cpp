#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &a,int n){
  int ans=INT_MAX;
  for(int i=0;i<n;i++){
    if(abs(a[i])<ans) ans=abs(a[i]);
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<f(a,n)<<endl;
}