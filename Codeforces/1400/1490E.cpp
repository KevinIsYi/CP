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
	int n;
	cin >> n;
	
	ll sum = 0;
	vector<bool> can(n);
	vector<pair<ll, int>> vct(n);
	
	for (int i = 0 ; i < n ; ++i) {
		ll x; cin >> x;
		
		vct[i] = mp(x, i);
		sum += x;
	}
	
	sort(all(vct));
	sum -= vct[n - 1].first;
	can[vct[n - 1].second] = true;
	int reps = 1;
	
	for (int i = n - 2 ; i >= 0 ; --i) {
		if (sum >= vct[i + 1].first) {
			++reps;
			can[vct[i].second] = true;
		}
		else {
			break;
		}
		sum -= vct[i].first;
	}
	
	cout << reps << "\n";
	for (int i = 0 ; i < n ; ++i) {
		if (can[i]) {
			cout << i + 1 << " ";
		}
	}
	
	cout << "\n";
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