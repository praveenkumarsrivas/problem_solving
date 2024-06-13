#include<bits/stdc++.h>
#include<iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(){
  ll n,m,k;
  cin>>n>>m>>k;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  unordered_map<int,int>b;
  int x;
  for (int i = 0; i < m; i++)
  {
    cin>>x;
    b[x]+=1;
  }
  int ans = 0;
  
  
  
}

int main() {
  int T = 1;
  cin >> T;
  while(T--){
    solve();
  }
  return 0;
}
