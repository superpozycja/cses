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

int column[8];
int diag1[15];
int diag2[15];
int c[8][8];
int res = 0;

void search(int y) {
	if (y == 8) {
		res++;
		return;
	}
	for (int x = 0; x < 8; x++) {
		if (column[x] || diag1[x + y] || diag2[x - y + 7])
			continue;
		if (c[x][y])
			continue;
		column[x] = diag1[x + y] = diag2[x - y + 7] = 1;
		search(y + 1);
		column[x] = diag1[x + y] = diag2[x - y + 7] = 0;
	}
}

void solve()
{
	string l;
	for (int i = 0; i < 8; i++) {
		getline(cin, l);
		for (int j = 0; j < 8; j++) {
			c[i][j] = (l[j] == '*');
		}
	}

	search(0);
	cout << res << "\n";
}

int main()
{
	solve();
}
