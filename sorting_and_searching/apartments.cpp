#include <bits/stdc++.h>

using namespace std;

using ui = unsigned int;
using l = long;
using ul = unsigned long;
using ll = long long;
using ull = unsigned long long;

using vi = vector<int>;
using vui = vector<ui>;
using vl = vector<l>;
using vul = vector<ul>;
using vll = vector<ll>;
using vull = vector<ull>;

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	int a[n];
	int b[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < m; i++)
		cin >> b[i];

	sort(a, a+n);
	sort(b, b+m);

	int res = 0;
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j] - k) {
			i++;
		} else if (a[i] > b[j] + k) {
			j++;
		} else {
			i++;
			j++;
			res++;
		}
	}

	cout << res << "\n";

	return;
}

int main()
{
	solve();
}
