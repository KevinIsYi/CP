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
	
	ll x;
	cin >> x;
	
	vector<bool> vct(1e9, true);
	vct[1] = false;
	for (ll i = 2 ; i * i <= 1e5 + 3; ++i) {
		if (vct[i]) {
			for (int j = i * i; j <= 1e5 + 3 ; j += i) {
				vct[j] = false;
			}
		}
	}
	

	for (ll i = x ;  ; ++i) {
		if (vct[i]) {
			cout << i << "\n";
			break;
		}
	}
	
	
	return 0;
}