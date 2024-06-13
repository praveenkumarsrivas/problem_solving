// Given an array of N integers and Q queries, each query having a range from index L to R. Find the maximum prefix-sum for the range L to R.
// Note: Assume 0 based indexing.
// Input:
// a[ ] = {-1, 2, 3, -5}
// Q = 2
// L1 = 0, R1 = 3
// L2 = 1, R2 = 3
// Output:
// 4 5
// Explanation:
// The range (0, 3) in the 1st query is {-1, 2, 3, -5}, hence,
// the max prefix-sum will be -1 + 2 + 3 = 4. The range (1, 3)
// in the 2nd query is {2, 3, -5}, hence, the max prefix-sum
// will be 2 + 3 = 5.
// Time Complexity: O(n)
// Auxiliary Space: O(n)

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

using namespace std;
void maxPrefixes(ll a[], ll L[], ll R[], ll N, ll Q)
{
  vector<ll> ss;
  ll s = 0;
  for (int i = 0; i < N; i++)
  {
    s += a[i];
    ss.push_back(s);
  }
  // There is two cases:
  // 1. if L=0 and R<=N-1
  // return ss[R]
  // 2. if L=X and R=Y (X<Y and X,Y<N)
  // return ss[Y]-ss[X-1]
  ll max_sum = 0;
  for (int i = 0; i < Q; i++)
  {
    if (L[i] == 0)
    {
      max_sum = max(max_sum, ss[R[i]]);
    }
    else
    {
      max_sum = max(max_sum, (ss[R[i]] - ss[L[i] - 1]));
    }
  }

  cout << max_sum;
}
int main()
{
  int T = 1;
  cin >> T;
  while (T--)
  {
    // your code here
    ll L[] = {2};
    ll R[] = {6};
    ll arr[] = {2, 8, 3, 9, 6, 5, 4};
    int Q = 1;
    int N = sizeof(arr) / sizeof(arr[0]);
    maxPrefixes(arr, L, R, N, Q);
  }
  return 0;
}
