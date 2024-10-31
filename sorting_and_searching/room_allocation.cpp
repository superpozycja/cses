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
	vector<pair<pair<int, int>, int>> t;
	vector<int> res(n);
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		t.push_back({{s, 1}, i});
		t.push_back({{e + 1, -1}, i});
	}
	sort(t.begin(), t.end(), 
			[](auto &l, auto &r) {
			if (l.first.first == r.first.first) {
				return l.first.second < r.first.second;
			}
			return l.first.first < r.first.first;
			});
	int cur = 0, m = 0;
	for (auto x : t) {
		cur += x.first.second;
		m = max(m, cur);
	}
	cout << m << "\n";
	set<int> rooms;
	for (int i = 0; i < m; i++) {
		rooms.insert(i+1);
	}

	for (auto x : t) {
		if (x.first.second == 1) {
			res[x.second] = *rooms.begin();
			rooms.erase(res[x.second]);
		} else {
			rooms.insert(res[x.second]);
		}
	}

	for (auto x : res) {
		cout << x << " ";
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
