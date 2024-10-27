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
	int p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p+n);

	long res = 0;
	for (int i = 0; i < n; i++) {
		res += abs(p[i] - p[n/2]);
	}
	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
