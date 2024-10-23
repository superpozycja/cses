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

uint32_t reverse(uint32_t x)
{
    x = ((x >> 1) & 0x55555555u) | ((x & 0x55555555u) << 1);
    x = ((x >> 2) & 0x33333333u) | ((x & 0x33333333u) << 2);
    x = ((x >> 4) & 0x0f0f0f0fu) | ((x & 0x0f0f0f0fu) << 4);
    x = ((x >> 8) & 0x00ff00ffu) | ((x & 0x00ff00ffu) << 8);
    x = ((x >> 16) & 0xffffu) | ((x & 0xffffu) << 16);
    return x;
}

void solve()
{
	uint32_t n;
	long long res = 1;
	cin >> n;
	int z = 32 - __builtin_clz(n);
	n = reverse(n) >> (32 - z);
	while (z--) {
		res *= (res % (1000000007));
		if ((n&1) == 1) {
			res *= 2 % (1000000007);
		}
		res %= 1000000007;
		n >>= 1;
	}
	cout << res << "\n";
}

int main()
{
	solve();
}
