#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int>&nums,int n){
  if(n==1) return nums[0];
  if(nums[0]!=nums[1]) return nums[0];
  if(nums[n-1]!=nums[n-2]) return nums[n-1];
  int l=1;
  int h=n-2;
  while(l<=h){
      int mid=(l+h)/2;
      if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
          return nums[mid];
      }
      if((mid%2==1 && nums[mid]==nums[mid-1]) or (mid%2==0 && nums[mid]==nums[mid+1])){
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
  vector<int>nums;
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    nums.push_back(c);
  }
  cout<<singleElement(nums,n);
}