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
	
	int n, m, t, prev = 0;
	bool can = true;
	
	cin >> n >> m >> t;
	int curr = n;
	
	for (int i = 0 ; i < m ; ++i) {
		int a, b;
		cin >> a >> b;
		
		curr -= (a - prev);
		if (curr <= 0) {
			can = false;
		}
		curr = min(curr + (b - a), n);
		prev = b;
	}
	
	if ((t - prev) >= curr) {
		can = false;
	}
	
	if (can) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}