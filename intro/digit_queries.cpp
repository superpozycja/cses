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
	ll k;
	cin >> k;
	if (k < 10) {
		cout << k << "\n";
		return;
	}

	ll den = 90;
	ll n = 2;
	ll base = 10;
	ll range = 9;
	while (k > range) {
		ll new_range = range + den * n;
		if (k <= new_range) 
			break;
		den *= 10;
		n++;
		base *= 10;
		range = new_range;
	}

	k -= range + 1;
	ll dig = k % n;
	k /= n;
	ll res = base + k;
	for (ll i = n-1; i > dig; i--)
		res /= 10;
	cout << res % 10 << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
