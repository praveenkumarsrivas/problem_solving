// Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main()
{
  string s;
  cin >> s;
  vector<ll> mp(256, -1);
  ll left = 0, right = 0, len = 0;
  ll n = s.size();
  while (right < n)
  {
    if (mp[s[right]] != -1)
    {
      left = max(left, mp[s[right]] + 1);
    }
    len = max(len, (right - left + 1));
    mp[s[right]] = right;
    right++;
  }
  cout << len;
}
