#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long y, x, res = 1;
	cin >> y >> x;
	if (y == x) {
		res = x * (x - 1) + 1;
	} else if (y > x) {
		res = 2*(y/2) * 2*(y/2) + y%2;
		int dir = y%2 ? 1 : -1;
		res += (x-1) * dir;
	} else {
		res = (2*((x-1)/2)+1) * (2*((x-1)/2)+1) + (x+1)%2;
		int dir = x%2 ? -1 : 1;
		res += (y-1) * dir;
	}
	cout << res << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
