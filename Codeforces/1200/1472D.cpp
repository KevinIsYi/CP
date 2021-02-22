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

void solve() {
	ll n, alice = 0;
	cin >> n;
	vector<ll> vct(n);
	
	for (ll & val : vct) {
		cin >> val;
	}
	
	sort(allr(vct));
	
	for (int i = 0 ; i < n ; ++i) {
		if (i % 2 == 0) {
			if (vct[i] % 2 == 0) {
				alice += vct[i];
			}
		}
		else {
			if (vct[i] % 2 == 1) {
				alice -= vct[i];
			}
		}
	}
	
	if (alice > 0) {
		cout << "Alice\n";
	}
	else if (alice < 0) {
		cout << "Bob\n";
	}
	else {
		cout << "Tie\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--) {
		solve();
	}
	
	return 0;
}