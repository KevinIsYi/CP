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

	int n, y;
	cin >> n >> y;
	
	for (int i = n ; i >= 0 ; --i) {
		for (int j = 0 ; j <= n - i ; ++j) {
			if ((i * 10000) + (j * 5000) + ((n - j - i) * 1000) == y) {
				cout << i << " " << j << " " << n - j - i << "\n";
				return 0;
			}
			
		}
	}
	
	cout << "-1 -1 -1\n";
	
	return 0;
}