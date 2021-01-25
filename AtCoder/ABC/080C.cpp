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
	vector<vector<int>> f(n, vector<int>(10)), p(n, vector<int>(11));

	for (vector<int> & v : f) {
		for (int & val : v) {
			cin >> val;
		}
	}
	for (vector<int> & v : p) {
		for (int & val : v) {
			cin >> val;
		}
	}
	
	int ans = -1e9;
	for (int mask = 1 ; mask < (1 << 10) ; ++mask) {
		int curr = 0;
		for (int i = 0 ; i < n ; ++i) {
			int c = 0;
			for (int j = 0 ; j < 10 ; ++j) {
				if (mask & (1 << j)) {
					if (f[i][j] != 0) {
						++c;
					}
				}
			}			
			curr += p[i][c];			
		}
		ans = max(ans, curr);
	}	

	cout << ans << "\n";	
	
	return 0;
}