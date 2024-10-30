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
	int x, n;
	cin >> x >> n;
	int res = x;
	set<int> lights = { 0, x };
	multiset<int> dists = { x };
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;

		auto it = lights.upper_bound(tmp);
		auto it2 = it;
		it2--;

		dists.erase(dists.find(*it - *it2));
		dists.insert(tmp - *it2);
		dists.insert(*it - tmp);
		lights.insert(tmp);

		it = dists.end();
		--it;
		cout << *it << " ";
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
