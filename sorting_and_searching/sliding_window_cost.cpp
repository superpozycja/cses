#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ui = unsigned int;
using ul = unsigned long;
using ll = long long;
using ull = unsigned long long;

using vi = vector<int>;
using vui = vector<ui>;
using vl = vector<long>;
using vul = vector<ul>;
using vll = vector<ll>;
using vull = vector<ull>;

void solve()
{
	int n, k;
	cin >> n >> k;
	multiset<int> l;
	multiset<int> r;
	queue<int> q;
	ll sl = 0;
	ll sr = 0;
	int x;
	cin >> x;
	l.insert(x);
	sl += x;
	q.push(x);
	if (k == 1) {
		for (int i = 0; i < n; i++)
			cout << "0 ";
		cout << "\n";
		return;
	}
	for (int i = 1; i < n; i++) {
		cin >> x;
		q.push(x);
		int a = *l.rbegin();
		if (a < x) {
			r.insert(x);
			sr += x;
			if (r.size() > k / 2) {
				sl += *r.begin();
				sr -= *r.begin();
				l.insert(*r.begin());
				r.erase(r.find(*r.begin()));
			}
		} else  {
			l.insert(x);
			sl += x;
			if (l.size() > (k+1) / 2) {
				sl -= *l.rbegin();
				sr += *l.rbegin();
				r.insert(*l.rbegin());
				l.erase(l.find(*l.rbegin()));
			}
		}

		if (i >= k - 1) {
			int v = q.front();
			cout << sr - sl + (k % 2 ? *l.rbegin() : 0) << " ";
			if (r.find(v) != r.end()) {
				r.erase(r.find(v));
				sr -= v;
			}
			else {
				l.erase(l.find(v));
				sl -= v;
			}

			if (l.empty()) {
				sl += *r.begin();
				sr -= *r.begin();
				l.insert(*r.begin());
				r.erase(r.find(*r.begin()));
			}
			q.pop();
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
