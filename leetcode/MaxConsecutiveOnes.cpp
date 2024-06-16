//Max Consecutive Ones
// https://leetcode.com/problems/max-consecutive-ones/description/
#include <bits/stdc++.h>
#include <iostream>
#include<algorithm>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main() {
  vector<int>v;
  int max_count=0,x;
  for (int i = 0; i < 6; i++)
  {
    cin>>x;
    v.push_back(x);
  }
  int current_count=0;
  for(int i=0;i< 6;i++){
    if(v[i]!=1){
      max_count = max(max_count,current_count);
      // cout<<current_count<<endl;
      current_count=0;
    }
    else{
    current_count++;
    }
  }
  max_count = max(max_count,current_count);
  cout<<max_count;
  return 0;
}