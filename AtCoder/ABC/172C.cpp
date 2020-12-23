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
	
	ll n, m, k;
	cin >> n >> m >> k;
	
	vector<ll> a(n), b(m);
	
	for (ll & val : a) {
		cin >> val;
	}
	for (ll & val : b) {
		cin >> val;
	}
	
	vector<ll> sumA(n + 1), sumB(m + 1);
	for (int i = 0 ; i < n ; ++i) {
		sumA[i + 1] = sumA[i] + a[i];
	}
	for (int i = 0 ; i < m ; ++i) {
		sumB[i + 1] = sumB[i] + b[i];
	}
	
	int ans = 0;
	
	for (int i = 0 ; i <= n ; ++i) {
		ll curr = k - sumA[i];
		if (curr < 0) {
			continue;
		}
		int l = lower_bound(all(sumB), curr) - sumB.begin();
		if (l > m || sumB[l] > curr) {
			--l;
		}
		ans = max(ans, i + l);
	}
	
	cout << ans << "\n";
	
	return 0;
}