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
	int ans = 0;
	
	cin >> str;
	int n = (int)str.size();
	
	for (int i = 1 ; i < ceil(n, 2) ; ++i) {
		bool can = true;
		for (int j = 0 ; j < i ; ++j) {
			if (str[j] != str[j + i]) {
				can = false;
				break;
			}
		}
		if (can) {
			ans = i * 2;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}