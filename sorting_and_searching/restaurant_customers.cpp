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
	vector<pair<int, int>> c;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		c.push_back({s, 1});
		c.push_back({e, -1});
	}
	sort(c.begin(), c.end());
	int cur = 0;
	int res = 0;
	for (auto x : c) {
		cur += x.second;
		res = cur > res ? cur : res;
	}
	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
