#include<bits/stdc++.h>
using namespace std;

int f(vector<vector<char> > &a){
  int ans=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(a[i][j]=='X'){
        if(i>=4 and i<=5 and j>=4 and j<=5){
          ans+=5;
        }
        else if(i>=3 and i<=6 and j>=3 and j<=6){
          ans+=4;
        }
        else if(i>=2 and i<=7 and j>=2 and j<=7){
          ans+=3;
        }
        else if(i>=1 and i<=8 and j>=1 and j<=8){
          ans+=2;
        }else{
          ans+=1;
        }
      }
    }
  }
  return ans;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    vector<vector<char> > a(10,vector<char>(10));
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        cin>>a[i][j];
      }
    }
    cout<<f(a)<<endl;
  }
} 