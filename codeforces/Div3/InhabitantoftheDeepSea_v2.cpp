#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum <= k)
    {
        cout << n << endl;
    }
    else
    {
        ll front, back;
        front = k / 2 + k % 2;
        back = k / 2;
        ll i = 0, j = n - 1, ans = 0;
        while (i <= n - 1 && front >= arr[i])
        {
            ans++;
            front -= arr[i];
            i++;
        }
        while (j >= i && back >= arr[j])
        {
            ans++;
            back -= arr[j];
            j--;
        }
        cout << ans << endl;
    }
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
