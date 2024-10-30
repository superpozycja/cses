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
	set<int> res;
	for (int i = 1; i <= n; i++) {
		res.insert(i);
	}

	auto last = res.begin();
	for (int i = 1; i <= n; i++) {
		last++;
		if (last == res.end()) {
			last = res.begin();
		}
		cout << *last << " ";
		auto l2 = last;
		l2++;
		res.erase(last);
		if (l2 == res.end()) {
			l2 = res.begin();
		}
		last = l2;
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
