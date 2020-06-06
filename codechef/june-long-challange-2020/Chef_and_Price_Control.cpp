#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[100000];
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                arr[i] = k;
            }
            s += arr[i];
        }
        cout << total - s;
    }
    return 0;
}
