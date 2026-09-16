#include<bits/stdc++.h>
using namespace std;

double multiply(int number,int n){
  double ans=1.0;
  for(int i=0;i<=n;i++){
    ans=ans*number;
  }
  return ans;
}

double nthroot(int n,int m){
  double l=1;
  double h=m;
  double eps=1e-6;
  while((h-l)>eps){
    double mid=(l+h)/2.0;
    if(multiply(mid,n)<m){
      l=mid;
    }
    else{
      h=mid;
    }
  }
  return l;
}

int main(){
  int n,m;
  cin>>n>>m;
  cout<<nthroot(n,m);
  return 0;
}