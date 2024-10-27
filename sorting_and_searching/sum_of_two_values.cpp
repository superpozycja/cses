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
	int t[n];
	int og[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i];
		og[i] = t[i];
	}

	sort(t, t + n);

	int i = 0, j = n-1;

	while (i < j) {
		if (t[i] + t[j] > x) {
			j--;
		} else if (t[i] + t[j] < x) {
			i++;
		} else {
			int fi = 0, fj = 0;
			for (int x = 0; x < n; x++) {
				if(og[x] == t[i] && !fi) {
					cout << x+1 << " ";
					fi = 1;
					continue;
				}
				if(og[x] == t[j] && !fj) {
					cout << x+1 << " ";
					fj = 1;
				}
			}
			cout << "\n";
			return;

		}
	}

	cout << "IMPOSSIBLE\n";

}

int main()
{
	solve();
}
