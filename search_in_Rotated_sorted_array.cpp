#include<bits/stdc++.h>
using namespace std;

int Rotatedarray(vector<int>&a,int n,int k){
  int l=0;
  int h=n-1;
  while(l<=h){
    int mid=(l+h)/2;
    if(a[mid]==k){
      return mid;
    }
    if(a[l]<=a[mid]){
      if(k>=a[l] && k<=a[mid]){
        h=mid-1;
      }
      else{
        l=mid+1;
      }
    }
    else{
      if(k>=a[mid] && k<=a[h]){
        l=mid+1;
      }else{
        h=mid-1;
      }
    }
  }
  return -1;
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
  cout<<Rotatedarray(a,n,k);
}