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
	int x[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];
	sort(x, x+n);

	long res = 1;
	int i = 0;
	for (i = 0; i < n; i++) {
		if (x[i] > res) {
			cout << res << "\n";
			return;
		}
		res += x[i];
	}
	cout << res << "\n";

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
