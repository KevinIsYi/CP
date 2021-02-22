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
	int n, ans = 0;
	string str;
	
	cin >> n >> str;
	
	string a = '0' + str + '1', b = '1' + str + '0';
	
	int curr = 0;
	for (int i = 1 ; i < n + 2 ; ++i) {
		ans += a[i] == a[i - 1];
		curr += b[i] == b[i - 1];
	}
	
	cout << a << " " << b << "\n";
	cout << ans << " " << curr << "\n";
	cout << min(ans / 2, curr / 2) << "\n";
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