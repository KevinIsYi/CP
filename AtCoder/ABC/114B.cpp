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
	
	string str;
	int val = 753;
	int ans = 1e9;
	
	cin >> str;
	
	for (int i = 0 ; i < (int)str.size() - 2 ; ++i) {
		int ten = 100, curr = 0;
		for (int lim = 0, j = i ; lim < 3 ; ++lim, ++j) {
			curr += (str[j] - '0') * ten;
			ten /= 10;
		}
		ans = min(ans, abs(val - curr));
	}
	
	cout << ans << "\n";
	
	
	
	return 0;
}