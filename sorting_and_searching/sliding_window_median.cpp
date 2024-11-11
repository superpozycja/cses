#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
namespace __gnu_pbds{
	template<class T>
         using ordered_multiset = tree<T,
                       null_type,
                       less_equal<T>,
                       rb_tree_tag,
                       tree_order_statistics_node_update>;
}
using namespace __gnu_pbds;


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
	ordered_multiset<int> s;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
		q.push(x);
		if (i >= k - 1) {
			cout <<  *(s.find_by_order((k-1)/2)) << " ";
			int p = q.front();
			s.erase(s.find_by_order(s.order_of_key(p)));
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
