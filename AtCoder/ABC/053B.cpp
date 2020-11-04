#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)

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
	
	string s;
	
	cin >> s;
	int mn = (int)s.size(), mx = -1;
	
	for (int i = 0 ; i < (int)s.size() ; ++i) {
		if (s[i] == 'A') {
			mn = min(mn, i);
		}
		else if (s[i] == 'Z') {
			mx = max(mx, i);
		}
	}
	
	cout << mx - mn << "\n";
	
	return 0;
}