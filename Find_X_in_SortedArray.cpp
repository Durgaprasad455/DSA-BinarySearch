#include<bits/stdc++.h>
using namespace std;

// iterative code TC-> O(logN)
bool findX(vector<int>&a,int n,int k){
  int l=0;
  int r=n-1;
  while(l<r){
    int mid=(l+r)/2;
    if(k<mid){
      r=mid-1;
    }else if(k>mid){
      l=mid+1;
    }
    else{
      return true;
    }
  }
  return false;
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
  if(findX(a,n,k)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}