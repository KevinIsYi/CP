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

ll digits(ll n) {
	ll dig = 0;
	while(n > 0) {
		n /= 10;
		dig++;
	}
	
	return dig;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll a, b, x, ans = 0;
	cin >> a >> b >> x;
	
	ll l = 1, r = 1e9;
	while(l <= r) {
		ll middle = l + (r - l) / 2;
		
		if ((a * middle) + (b * digits(middle)) <= x) {
			l = middle + 1;
			ans = middle;
		}
		else {
			r = middle - 1;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}