#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n, a, b;
		cin >> n >> a >> b;
		int op1 = n * a;
		int op2 = (n / 2) * b + (n % 2) * a;
		cout << min(op1, op2) << endl;
	}
	return 0;
}