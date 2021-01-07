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
	
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	
	int mx = -105, mn = 105;
	
	for (int i = 0 ; i < n ; ++i) {
		int x; cin >> x;
		mx = max(mx, x);
	}
	for (int i = 0 ; i < m ; ++i) {
		int x; cin >> x;
		mn = min(mn, x);
	}
	
	bool can = false;
	for (int i = x + 1 ; i <= y ; ++i) {
		if (i > mx && i <= mn) {
			can = true;
			break;
		}
	}
	
	if (can) {
		cout << "No War\n";
	}
	else {
		cout << "War\n";
	}
	
	return 0;
}