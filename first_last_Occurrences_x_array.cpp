#include<bits/stdc++.h>
using namespace std;

//using lowerBound and UpperBound concept 
//TC -> O(2*logN)
int lowerBound(vector<int>&a,int n,int k){
  int lb=lower_bound(a.begin(),a.end(),k)-a.begin();
  return lb;
}
int upperBound(vector<int>&a,int n,int k){
  int ub=upper_bound(a.begin(),a.end(),k)-a.begin();
  return ub;
}

//using binary search 
// two functions 1) first and 2) last return boths functions

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>a;
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    a.push_back(c);
  }
  int l=lowerBound(a,n,k);
  int u=upperBound(a,n,k);
  if(l==n || a[l]!=k){
    cout<<"{"<<-1<<","<<-1<<"}";
    return 0;
  }
  cout<<"{"<<l<<","<<u-1<<"}";
  return 0;
}