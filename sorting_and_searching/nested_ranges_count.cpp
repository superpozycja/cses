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
	vector<
		pair<
			pair<int, int>,
			pair<int, int>
		>
	> a;

	for (int i = 0; i < n; i++) {
		int t, t2;
		cin >> t >> t2;
		a.push_back({{t, t2}, {i, 0}});
	}

	sort(a.begin(), a.end(), 
	     [](auto &l, auto &r) {
	     	if (l.first.first == r.first.first)
		     return l.first.second < r.first.second;
		return l.first.first > r.first.first;
	     });

	ordered_set<pair<int, int>> mr;
	int i = 0;
	for (auto &x : a) {
		mr.insert({x.first.second, i});
		auto dist = mr.order_of_key({x.first.second, i});
		x.second.second = dist;
		i++;
	}

	sort(a.begin(), a.end(), 
	     [](auto &l, auto &r) {
		return l.second.first < r.second.first;
	     });

	for (auto x : a) {
		cout << x.second.second << " ";
	}
	cout << "\n";

	sort(a.begin(), a.end(), 
	     [](auto &l, auto &r) {
	     	if (l.first.first == r.first.first)
		     return l.first.second > r.first.second;
		return l.first.first < r.first.first;
	     });

	mr.clear();
	i = 0;
	for (auto &x : a) {
		mr.insert({x.first.second, -i});
		auto dist = mr.size() - mr.order_of_key({x.first.second, -i}) - 1;
		x.second.second = dist;
		i++;
	}

	sort(a.begin(), a.end(), 
	     [](auto &l, auto &r) {
		return l.second.first < r.second.first;
	     });

	for (auto x : a) {
		cout << x.second.second << " ";
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
