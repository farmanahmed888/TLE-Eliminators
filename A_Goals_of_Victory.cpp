#include<bits/stdc++.h> 
using namespace std;

int f(int n,vector<int> a){
  int sum=0;
  for(int i=0;i<n-1;i++){
    sum+=a[i];
  }
  return -sum;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
      cin>>a[i];
    }
    cout<<f(n,a)<<endl;
  }
}