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
	ll n;
	cin >> n;
	
	vector<pair<int, ll>> vct;
	for (ll i = 2 ; i * i <= n ; ++i) {
		int cnt = 0;
		while(n % i == 0) {
			++cnt;
			n /= i;
		}
		if (cnt > 0) {
			vct.pb(mp(cnt, i));
		}
	}
	
	if (n > 1) {
		vct.pb(mp(1, n));
	}
	
	sort(allr(vct));
	vector<ll> ans(vct[0].first, vct[0].second);
	
	for (int i = 1 ; i < (int)vct.size() ; ++i) {
		for (int j = 0 ; j < vct[i].first ; ++j) {
			ans.back() *= vct[i].second;
		}
	}

	
	cout << ans.size() << "\n";
	for (ll val : ans) {
		cout << val << " ";
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