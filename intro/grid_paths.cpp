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

int v[7][7];
int p, s;
string path;

void rec(int r, int c)
{
	if (v[r][c])
		return;

	if ((r == 0 && v[r+1][c]) || (r == 6 && v[r-1][c]))
		if (c > 0 && c < 6 && !v[r][c-1] && !v[r][c+1])
			return;

	if ((c == 0 && v[r][c+1]) || (c == 6 && v[r][c-1]))
		if (r > 0 && r < 6 && !v[r-1][c] && !v[r+1][c])
			return;

	if (r > 0 && r < 6 && v[r+1][c] && v[r-1][c])
		if (c > 0 && c < 6 && !v[r][c-1] && !v[r][c+1])
			return;

	if (c > 0 && c < 6 && v[r][c+1] && v[r][c-1])
		if (r > 0 && r < 6 && !v[r-1][c] && !v[r+1][c])
			return;

	if (r == 6 && c == 0) {
		if(s == 48) {
			p++;
		}
		return;
	}
	v[r][c] = 1;
	if (r < 6 && !v[r + 1][c] && (path[s] == 'D' || path[s] == '?')) {
		s++;
		rec(r + 1, c);
		s--;
	}
	if (r > 0 && !v[r - 1][c] && (path[s] == 'U' || path[s] == '?')) {
		s++;
		rec(r - 1, c);
		s--;
	}
	if (c < 6 && !v[r][c + 1] && (path[s] == 'R' || path[s] == '?')) {
		s++;
		rec(r, c + 1);
		s--;
	}
	if (c > 0 && !v[r][c - 1] && (path[s] == 'L' || path[s] == '?')) {
		s++;
		rec(r, c - 1);
		s--;
	}
	v[r][c] = 0;
}

void solve()
{
	getline(cin, path);
	rec(0, 0);
	cout << p << "\n";
}

int main()
{
	solve();
}
