#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
	l rst = 0;
	l mx = 0;
	for (int i = 0; i < n; i++) {
		l t;
		cin >> t;
		rst += t;
		mx = max(t, mx);
	}
	rst -= mx;

	if (mx > rst) {
		cout << 2 * mx << "\n";
	} else {
		cout << mx + rst << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
