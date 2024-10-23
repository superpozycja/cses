#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n] = {0};
	for (int i = 0; i < n-1; i++) {
		int t;
		cin >> t;
		a[t-1] = 1;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0)
			cout << i+1 << "\n";
	}

}

int main()
{
	solve();
}
