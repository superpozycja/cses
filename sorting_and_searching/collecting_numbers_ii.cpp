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
	int n, m;
	cin >> n >> m;
	int pos[n];
	int val[n];

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		pos[tmp-1] = i;
		val[i] = tmp-1;
	};

	long res = 1;
	for (int i = 0; i < n-1; i++) {
		res += (pos[i] > pos[i+1]);
	}

	int a, b;

	set<pair<int, int>> u;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		u.clear();
		if (val[a-1] > 0) {
			u.insert({val[a-1]-1, val[a-1]});
		}
		if (val[a-1] < n-1) {
			u.insert({val[a-1], val[a-1]+1});
		}
		if (val[b-1] > 0) {
			u.insert({val[b-1]-1, val[b-1]});
		}
		if (val[b-1] < n-1) {
			u.insert({val[b-1], val[b-1]+1});
		}
		for (auto x : u) {
			res -= pos[x.first] > pos[x.second];
		}
		
		swap(val[a-1], val[b-1]);
		pos[val[a-1]] = a-1;
		pos[val[b-1]] = b-1;

		for (auto x : u) {
			res += pos[x.first] > pos[x.second];
		}

		cout << res << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
