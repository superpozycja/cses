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

vll res;

void solve()
{
	int n;
	cin >> n;
	vi a;
	ll s = 0;
	for (int i = 0; i < n; i++) {
		l tmp;
		cin >> tmp;
		s += tmp;
		a.push_back(tmp);
	}
	ll res = s;

	for (int i = 0; i < 1 << n; i++) {
		ll s2 = s;
		int j = 0;
		int nn = i;
		while (nn) {
			s2 -= a[j] * (nn % 2);
			nn /= 2;
			j++;
		}

		ll diff = abs(s - s2 - s2);
		res = diff < res ? diff : res;
	}
	cout << res << "\n";
}

int main()
{
	solve();
}
