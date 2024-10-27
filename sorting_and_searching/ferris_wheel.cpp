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
	int n, x;
	cin >> n >> x;
	int p[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	int i = 0, j = n-1;

	sort(p, p+n);

	int res = 0;
	while (i <= j) {
		if (i == j) {
			j--;
		} else if (p[i] + p[j] > x) {
			j--;
		} else {
			i++;
			j--;
		}
		res++;
	}

	cout << res << "\n";
}

int main()
{
	solve();
}
