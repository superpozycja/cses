#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long n;
	cin >> n;
	if (n == 1) {
		cout << "1\n";
		return;
	}
	if (n < 4) { 
		cout << "NO SOLUTION\n";
		return;
	}

	for (int i = (n+1)/2; i < n; i++) {
		cout << (2-n%2)+(i*2)%n << " ";
	}
	for (int i = 0; i < (n+1)/2; i++) {
		cout << 1+(i*2)%n << " ";
	}

	cout << "\n";
}

int main()
{
	solve();
}
