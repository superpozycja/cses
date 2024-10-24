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

void move(int n, int from, int to) {
	if (n == 1) {
		cout << from << " " << to << "\n";
		return;
	}

	move(n-1, from, 6-(from+to)); /* ;) */
	cout << from << " " << to << "\n";
	move(n-1, 6-(from+to), to);
}

void solve()
{
	int n;
	cin >> n;
	cout << (1<<n) - 1 << "\n";
	move(n, 1, 3);
}

int main()
{
	solve();
}
