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
	int n, a, b;
	cin >> n >> a >> b;
	long long x[n];
	long long pre[n+1] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		pre[i+1] = x[i] + pre[i];
	}

	long long res = -LLONG_MAX;
	multiset<long> history;
	for (int i = a; i < n + 1; i++) {
		if (i > b)
			history.erase(history.find(pre[i - b - 1]));

		history.insert(pre[i - a]);
		res = max(res, pre[i] - *(history.begin()));
	}

	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
