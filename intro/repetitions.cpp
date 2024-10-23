#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int res = 1;
	string l;

	while (getline(cin, l)) {
		int s = 1;

		for (int i = 0; i < l.length()-1; i++) {
			if (l[i] == l[i+1]) {
				s++;
			} else {
				s = 1;
			}
			res = res > s ? res : s;
		}
	}
	cout << res << "\n";
}

int main()
{
	solve();
}
