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
	int tmp = n, f = 0, t = 0;
	while (tmp > 0) {
		tmp /= 5;
		f += tmp;
	}

	tmp = n;
	while (tmp > 0) {
		tmp /= 2;
		t += tmp;
	}

	cout << (f < t ? f : t) << "\n";
}

int main()
{
	solve();
}