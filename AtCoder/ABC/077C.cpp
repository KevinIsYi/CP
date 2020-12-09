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

const int nax = 1e5 + 5;
ll a[nax], b[nax], c[nax];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n, ans = 0;
	cin >> n;
	
	
	
	for (int i = 1 ; i <= n ; ++i) {
		cin >> a[i];
	}
	for (int i = 1 ; i <= n ; ++i) {
		cin >> b[i];
	}
	for (int i = 1 ; i <= n ; ++i) {
		cin >> c[i];
	}
	
	sort(a + 1, a + n + 1);
	sort(b + 1, b + n + 1);
	sort(c + 1, c + n + 1);
	
	for (int i = 1 ; i <= n ; ++i) {
		ll x = lower_bound(a + 1, a + n + 1, b[i]) - a;
		ll y = upper_bound(c + 1, c + n + 1, b[i]) - c;
		
		--x;
		--y;
		y = n - y;
		ans += x * y;
	}
	
	cout << ans << "\n";
	
	
	return 0;
}