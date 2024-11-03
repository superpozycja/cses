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
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l = 0, r = 0;
	ll s = a[0];
	int res = 0;
	while (l < n && r < n) {
		if (s == x)
			res++;

		if (s >= x) {
			s -= a[l];
			l++;
		} else {
			r++;
			s += r < n ? a[r] : 0;
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
