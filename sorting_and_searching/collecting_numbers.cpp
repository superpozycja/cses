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
	vector<pair<int, int>> x;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		x.push_back({tmp, i});

	};
	int res = 1;
	sort(x.begin(), x.end());
	for (int i = 0; i < n-1; i++) {
		if (x[i].second > x[i+1].second)
			res++;
	}
	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
