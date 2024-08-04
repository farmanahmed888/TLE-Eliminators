#include<bits/stdc++.h>
using namespace std;

int f(int n, int m){
  if(n<0) return 1e9;
  if(n==m) return 0;
  int red=f(2*n,m);
  int blue=f(n-1,m);
  return 1+min(red,blue);
}

int main(){
  int m,n;
  cin>>n>>m;
  cout<<f(n,m);
}