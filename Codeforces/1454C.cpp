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
	map<int, vector<int>> mp;

	for (int i = 0 ; i < n ; ++i) {
		int x; cin >> x;
		mp[x].pb(i);
	}
	
	int ans = 1e9;
	for (pair<int, vector<int>> pa : mp) {
		int curr = 0;
		curr += pa.second[0] != 0;
		curr += pa.second.back() != n - 1;
		for (int i = 1 ; i < (int)pa.second.size() ; ++i) {
			if (abs(pa.second[i] - pa.second[i - 1]) > 1) {
				++curr;
			}
		}
		ans = min(ans, curr);
	}
	
	cout << ans << "\n";
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