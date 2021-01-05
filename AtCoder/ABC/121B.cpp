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
	
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> v(m);
	
	for (int & val : v) {
		cin >> val;
	}
	
	int ans = 0;
	for (int i = 0 ; i < n ; ++i) {
		int curr = 0;
		for (int j = 0 ; j < m ; ++j) {
			int x; cin >> x;
			
			curr += (x * v[j]);
		}
		curr += c;
		ans += curr > 0;
	}
	
	cout << ans << "\n";
	
	
	
	return 0;
}