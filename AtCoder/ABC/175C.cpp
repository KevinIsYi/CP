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
	
	ll x, k, d;
	cin >> x >> k >> d;
	
	x = abs(x);
	k = abs(k);
	d = abs(d);
	

	ll tim = min(k, x / d);
	k -= tim;
	x -= tim * d;
	
	if (k % 2 == 0) {
		cout << abs(x) << "\n";
	}
	else {
		cout << abs(x - d) << "\n";
	}

	
	return 0;
}