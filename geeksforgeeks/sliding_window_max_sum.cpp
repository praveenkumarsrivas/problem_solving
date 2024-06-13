// To find the maximum sum of all subarrays of size K:
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second
int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  int curr_sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // finding the first window sum
  int final_sum = 0;
  for (int i = 0; i < k; i++)
  {
    final_sum += arr[i];
  }
  curr_sum = final_sum;
  for (int i = k; i < n; i++)
  {
    curr_sum = curr_sum + arr[i] - arr[i - k];
    final_sum = max(curr_sum, final_sum);
  }
  cout << final_sum << endl;
  return 0;
}