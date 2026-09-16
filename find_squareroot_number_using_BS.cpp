#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
  int l=1;
  int h=n;
  int ans=1;
  while(l<=h){
    int mid=(l+h)/2;
    if(mid*mid <= n){
      ans=mid;
      l=mid+1;
    }
    else{
      h=mid-1;
    }
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<squareRoot(n);
}