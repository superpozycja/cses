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
	l n, k;
	cin >> n >> k;
	ordered_set<int> res;
	for (l i = 1; i <= n; i++) {
		res.insert(i);
	}

	auto last = res.begin();
	int p = 0;
	for (l i = 1; i <= n; i++) {
		p = (p + k) % res.size();
		last = res.find_by_order(p);
		cout << *last << " ";
		res.erase(last);
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
