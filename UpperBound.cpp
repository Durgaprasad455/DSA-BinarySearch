#include<bits/stdc++.h>
using namespace std;

// TC -> O(logN)
int upperBound(vector<int>&a,int n,int k){
  int l=0;
  int r=n-1;
  int ans=10;
  while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]<=k){
      l=mid+1;
    }
    else{
      ans=mid;
      r=mid-1;
    }
  }
  return ans;
}

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>a;
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    a.push_back(c);
  }
  cout<<upperBound(a,n,k);
}