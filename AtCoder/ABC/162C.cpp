#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define ll long long

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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int k;
	cin >> k;
	
	ll ans = 0;

	
	for (int i = 1 ; i <= k ; ++i) {
		for (int j = 1 ; j <= k ; ++j) {
			for (int z = 1 ; z <= k ; ++z) {
				ans += gcd(i, gcd(j, z));
			}
		}
	}
	
	

	cout << ans << "\n";
	
	return 0;
}