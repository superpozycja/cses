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
	int n, t;
	cin >> n >> t;
	l mx = 0;
	l k[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
		mx = max(mx, k[i]);
	}
	long l = 0, r = mx * t, m, res = 0;

	while (l <= r) {
		m = (l + r) / 2;
		long s = 0;
		for (int i = 0; i < n; i++) {
			s += m / k[i];
			if (s >= t) {
				break;
			}
		}
		if (s < t) {
			l = m+1;
		} else {
			res = m;
			r = m-1;
		}
	}
	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
