#include<bits/stdc++.h>
using namespace std;

int f(int n, string s){
  int ans=0;
  for(int i=0;i<n-2;i++){
      if(s[i]=='.' and
          s[i+1]=='.' and
          s[i+2]=='.'){
            return 2;
          }
  }
  for(int i=0;i<n;i++){
    if(s[i]=='.'){
      ans++;
    }
  }
  return ans;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<f(n,s)<<endl;
  }
}