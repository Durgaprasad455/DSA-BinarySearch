#include<bits/stdc++.h>
using namespace std;

// largest number <= k is floor
int floor(vector<int>&a,int n,int k){
  int ans=-1;
  int l=0;
  int h=n-1;
  while(l<=h){
    int mid=(l+h)/2;
    if(a[mid]<=k){
      ans=a[mid];
      l=mid+1;
    }
    else{
      h=mid-1;
    }
  }
  return ans;
}

// smallest number>=k is ceil
int ceil(vector<int>&a,int n,int k){
  int lb=lower_bound(a.begin(),a.end(),k)-a.begin();
  return a[lb];
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
  cout<<floor(a,n,k)<<endl;
  cout<<ceil(a,n,k);
}