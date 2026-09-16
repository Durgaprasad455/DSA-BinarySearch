#include<bits/stdc++.h>
using namespace std;

int miniElement(vector<int>&a,int n){
  int l=0;
  int h=n-1;
  int ans=INT_MAX;
  while(l<=h){
    int mid=(l+h)/2;

    if(a[l]<=a[h]){
      if(a[l]<ans){
        ans=a[l];
      }
      break;
    }
    if(a[l]<=a[mid]){
      ans=min(ans,a[l]);
      l=mid+1;
    }
    else{
      ans=min(ans,a[mid]);
      h=mid-1;
    }
  }
  return ans;
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
  cout<<miniElement(a,n);
}