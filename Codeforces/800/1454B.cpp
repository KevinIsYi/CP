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
	
	map<int, int> mp;
	map<int, int> index;
	for (int i = 0 ; i < n ; ++i) {
		int x; cin >> x;
		mp[x]++;
		index[x] = i;
	}
	
	
	bool can = false;
	int ans;
	for (pair<int, int> pa : mp) {
		if (pa.second == 1) {
			can = true;
			ans = index[pa.first];
			break;
		}
	}
	
	if (can) {
		cout << ans + 1 << "\n";
	}
	else {
		cout << "-1\n";
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