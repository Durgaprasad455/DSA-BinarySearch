#include<bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int>&a,int n,int k){
  int lb=lower_bound(a.begin(),a.end(),k)-a.begin();
  return lb;
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
  cout<<searchInsertPosition(a,n,k);
}