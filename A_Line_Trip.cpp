#include<bits/stdc++.h>
using namespace std;

int f(vector<int> a,int n,int x){
  int ans=a[0];
  for(int i=1;i<n;i++){
    ans=max(ans,abs(a[i]-a[i-1]));
  }
  ans=max(ans,abs(2*(x-a[n-1])));
  return ans;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<f(a,n,x)<<endl;
  }
}