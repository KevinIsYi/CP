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
	
	double n, t, a, ans, curr = 1e9;
	cin >> n >> t >> a;
	
	for (int i = 1 ; i <= n ; ++i) {
		double x; cin >> x;
		
		x = t - x * 0.006;
		
		if (curr > abs(a - x)) {
			curr = abs(a - x);
			ans = i;
		}
	}
	
	
	cout << ans << "\n";
	
	return 0;
}