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
	set<int> s;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		s.insert(tmp);
	}
	cout << s.size() << "\n";
}

int main()
{
	solve();
}
