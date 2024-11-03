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
	stack<pair<int, int>> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		while (!m.empty() && m.top().first >= x)
			m.pop();
		if (m.empty())
			cout << "0 ";
		else
			cout << m.top().second << " ";

		m.push({x, i + 1});
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
