#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)

template <typename T>
T ceil(T a, T b) {
	return (a + b - 1) / b;
}

template <typename T>
T gcd(T a, T b) {
	return b ? gcd(b, a % b) : a;
}

long long lcd(long long a, long long b) {
	if (a < b) {
		swap(a, b);
	}
	a /= gcd(a, b);
	return a * b;
}	

int k[1005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, mod = 1e9 + 7;
	
	cin >> n;

	for (int i = 2 ; i <= n ; ++i) {
		int l = i;
		for (int j = 2 ; j <= i ; ++j) {
			while(l % j == 0) {
				k[j]++;
				l /= j;
			}
		}
		k[l] += l > 0;
	}
	
	long long ans = 1;
	for (int i = 2 ; i <= n ; ++i) {
		if (k[i] > 0) {
			ans *= (long long)(k[i] + 1);
			ans %= mod;
		}
	}
	
	cout << ans % mod << "\n";
	
	
	return 0;
}