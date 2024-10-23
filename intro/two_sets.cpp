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
	long n;
	cin >> n;

	vi a, b;
	long s = n * (n+1) / 2, sa = 0;

	if (s%2) {
		cout << "NO\n";
		return;
	}

	for (long i = n; i > 0; i--) {
		if (i > s/2 - sa) {
			b.push_back(i);
		} else {
			sa += i;
			a.push_back(i);
		}
	}

	cout << "YES\n";
	cout << a.size() << "\n";
	for (auto aa : a) {
		cout << aa << " ";
	}
	cout << "\n";

	cout << b.size() << "\n";
	for (auto bb : b) {
		cout << bb << " ";
	}
	cout << "\n";
}

int main()
{
	solve();
}
