#include<bits/stdc++.h>
using namespace std;

int noofrotated(vector<int>&a,int n){
  int l=0;
  int h=n-1;
  int ans=INT_MAX;
  int ind=-1;
  while(l<=h){
    int mid=(l+h)/2;

    if(a[l]<=a[h]){
      if(a[l]<ans){
        ind=l;
        ans=a[l];
      }
      break;
    }
    if(a[l]<=a[mid]){
      if(a[l]<ans){
        ind=l;
        ans=a[l];
      }
      l=mid+1;
    }
    else{
      if(a[mid]<ans){
        ind=mid;
        ans=a[mid];
      }
      h=mid-1;
    }
  }
  return ind;
}

int main(){
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    a.push_back(c);
  }
  cout<<noofrotated(a,n);
}