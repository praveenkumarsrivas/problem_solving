#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        long long int p1 = 0;
        long long int p2 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'x' and str[i + 1] == 'y' && i + 1 != str.length())
            {
                p1 += 1;
            }
            if (str[i] == 'y' and str[i + 1] == 'x' && i + 1 != str.length())
            {
                p2 += 1;
            }
        }
        cout << max(p1, p2) << endl;
    }

    return 0;
}

