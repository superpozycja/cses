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

	map<ll, int> a;
	a[0] = 1;
	ll lst = 0;
	ll res = 0;
	for (int i = 0; i < n; i++) {
		int z;
		cin >> z;
		lst += z;
		lst = (n + (lst % n)) % n;
		res += a[lst];
		a[lst]++;
	}

	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
