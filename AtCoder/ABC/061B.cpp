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

const int MAX = 1e6 + 5;
ll cnt[MAX];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n, k, mx = 0;
	cin >> n >> k;
	
	for (int i = 0 ; i < n ; ++i) {
		int a, b;
		cin >> a >> b;
		
		cnt[a] += b;
		mx += b;
	}
	
	for (int ans = 1 ; ans <= mx ; ++ans) {
		if (k <= cnt[ans]) {
			cout << ans << "\n";
			break;
		}
		k -= cnt[ans];
	}
	
	return 0;
}