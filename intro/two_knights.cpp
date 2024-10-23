#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long n;
	cin >> n;
	for (long i = 1; i <= n; i++)
		cout << (i*i * (i*i-1) / 2) - (4 * (i - 1) * (i - 2)) << "\n";
}

int main()
{
	solve();
}
