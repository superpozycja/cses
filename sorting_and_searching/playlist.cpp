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
	int n;
	cin >> n;
	int k[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	int l = 0,  r = 0;
	int res = 0;
	multiset<int> u;

	while (r < n) {
		u.insert(k[r]);
		while (u.count(k[r]) > 1) {
			u.erase(u.find(k[l]));
			l++;
		}
		res = max(res, r - l + 1);
		r++;
	}

	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
