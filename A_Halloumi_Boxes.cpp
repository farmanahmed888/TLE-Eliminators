#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr,int n,int k){
  int asc=true;
  int dec=true;
  //if flag is true then array is not sorted
  for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
      
    }else{
      dec=false;
    }
  }
  
  //if flag is true then array is not sorted
  for(int i=1;i<n;i++){
    if(arr[i-1]<=arr[i]){
       
    }else{
      asc=false;
    }
  }
  if(asc)return true;
  // if(dec&&k>1)return true;
  if(k==1) return false;
  return true;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    if(f(arr,n,k)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}