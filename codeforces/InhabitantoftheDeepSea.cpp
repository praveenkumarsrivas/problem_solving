#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
    vector<int> vec;
    ll n, k, temp;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    ll sum1 = std::accumulate(vec.begin(), vec.end(), 0);
    if (sum1 <= k)
    {
        cout << n << endl;
    }
    else
    {
        ll i = 0;
        ll j = n - 1;
        while (i < j && k > 0)
        {
            if (k > 0)
            {
                vec[i] = vec[i] - 1;
                k--;
                if (vec[i] == 0)
                {
                    i++;
                }
            }
            if (k > 0)
            {
                vec[j] = vec[j] - 1;
                k--;
                if (vec[j] == 0)
                {
                    j--;
                }
            }
        }
        // cout<<sizeof(vec)<<endl;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
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
