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
	vector<pair<int, int>> t;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		t.push_back({s, e});
	}
	sort(t.begin(), t.end());
	long res = 0, ti = 0;
	for (auto x : t) {
		ti += x.first;
		res += x.second - ti;
	}
	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
