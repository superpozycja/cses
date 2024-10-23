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
	string l;
	getline(cin, l);

	int a[26] = { 0 };

	for (int i = 0; i < l.length(); i++)
		a[l[i]-'A']++;

	int odds = 0;
	int odd_ix = -1;
	for (int i = 0; i < 26; i++) {
		if (a[i]%2)
			odd_ix = i;
		odds += a[i]%2;
	}

	if (odds > 1) {
		cout << "NO SOLUTION\n";
		return;
	}

	for (int i = 0; i < 26; i++) {
		for(int j = 0; j < a[i]/2; j++) {
			char x = i + 'A';
			cout << x;
		}
	}

	if (odd_ix != -1) {
		char x = odd_ix + 'A';
		cout << x;
	}

	for (int i = 25; i >= 0; i--) {
		for(int j = 0; j < a[i]/2; j++) {
			char x = i + 'A';
			cout << x;
		}
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
