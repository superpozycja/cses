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

set<string> res;

void recurse(string cur, string src)
{
	if (src == "") {
		res.insert(cur);
		return;
	}

	for (int i = 0; i < src.length(); i++) {
		string tmp = src;
		tmp.erase(i, 1);
		recurse(cur + src[i], tmp);
	}
}

void solve()
{
	string l;
	getline(cin, l);
	sort(l.begin(), l.end());
	recurse("", l);
	cout << res.size() << "\n";
	for (auto x : res) {
		cout << x << "\n";
	}
}

int main()
{
	solve();
}
