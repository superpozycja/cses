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

	int mr = INT_MAX;
	for (auto &x : a) {
		if (mr <= x.first.second)
			x.second.second = 1;
		mr = min(mr, x.first.second);
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

	mr = 0;
	for (auto &x : a) {
		x.second.second = 0;
		if (mr >= x.first.second)
			x.second.second = 1;
		mr = max(mr, x.first.second);
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
