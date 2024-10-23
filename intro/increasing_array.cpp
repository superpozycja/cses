#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long n, prev, res = 0;

	cin >> n;
	cin >> prev;

	for (int i = 1; i < n; i++) {
		int a;

		cin >> a;
		res += prev - a > 0 ? prev - a : 0;
		a += prev - a > 0 ? prev - a : 0;
		prev = a;
	}
	cout << res << "\n";
}

int main()
{
	solve();
}
