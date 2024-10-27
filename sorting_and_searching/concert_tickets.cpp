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
	int n, m, t;
	cin >> n >> m;
	multiset<int> h;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		h.insert(tmp);
	}

	for (int i = 0; i < m; i++) {
		cin >> t;
		auto k = h.upper_bound(t);
		if (k == h.begin()) {
			cout << "-1\n";
		} else {
			cout << *(--k) << "\n";
			h.erase(k);
		}

	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
