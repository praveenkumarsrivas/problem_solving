#include <bits/stdc++.h>
typedef long int ll;
using namespace std;
bool cmp(const pair<int, int> &a,
         const pair<int, int> &b)
{
    return (a.first > b.first);
}
int main()
{
    ll n;
    cin >> n;
    ll rank[100000];
    for (ll i = 0; i < n; i++)
        cin >> rank[i];
    ll m;
    cin >> m;
    ll got_rank[100000];
    for (ll i = 0; i < m; i++)
    {
        cin >> got_rank[i];
    }

    //cleaning the leader board
    for (ll i = 0; i < n; i++)
    {
        if (rank[i] == rank[i + 1])
        {
            rank[i] = -1;
        }
    }
    ll clean_board[1000000];
    ll k = 0;
    for (ll i = 0; i < n; i++)
    {
        if (rank[i] != -1)
            clean_board[k++] = rank[i];
    }
    clean_board[k++] = 0;

    for (ll j = 0; j < m; j++)
    {
        for (ll i = 0; i < k; i++)
        {
            if (got_rank[j] > clean_board[i] && i == 0)
            {
                cout << "1" << endl;
                break;
            }

            if (got_rank[j] == clean_board[i])
            {
                cout << (i + 1) << endl;
                break;
            }
            if (got_rank[j] < clean_board[i] && got_rank[j] > clean_board[i + 1])
            {
                cout << (i + 2) << endl;
                break;
            }
            if (got_rank[j] < clean_board[i] && i == k)
            {
                cout << k << endl;
                break;
            }
        }
    }

    return 0;
}

