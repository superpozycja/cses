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
	int a, b;
	cin >> a >> b;
	int x = 2 * a - b;
	int y = 2 * b - a;
	if (x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
