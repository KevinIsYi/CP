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
	
	int n;
	cin >> n;
	vector<int> a(n), b(n), c(n - 1);
	
	for (int & val : a) {
		cin >> val;
	}
	for (int & val : b) {
		cin >> val;
	}
	for (int & val : c) {
		cin >> val;
	}
	
	int prev = -1, ans = 0;
	for (int val : a) {
		if (val - prev == 1) {
			ans += c[prev - 1];
		}
		
		ans += b[val - 1];
		prev = val;
	}
	
	cout << ans << "\n";
	
	return 0;
}