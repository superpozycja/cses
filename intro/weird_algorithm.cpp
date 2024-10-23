#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long n;
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n % 2)
			n = 3 * n + 1;
		else
			n >>= 1;
	}
	cout << "1\n";
}

int main()
{
	solve();
}
