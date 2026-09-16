#include<bits/stdc++.h>
using namespace std;

//single peak element and multiple peak element code 
int peakElement(vector<int>&a,int n){
  if(n==1) return 0;
  if(a[0]>a[1]) return 0;
  if(a[n-1]>a[n-2]) return n-1;
  int l=1;
  int h=n-2;
  while(l<=h){
    int mid=(l+h)/2;
    if(a[mid]>a[mid-1] && a[mid]<a[mid+1]){
      return mid;
    }
    else if(a[mid]>a[mid-1]){
      l=mid+1;
    }
    else{
      h=mid-1;
    }
  }
  return -1;
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
  cout<<peakElement(a,n);
}