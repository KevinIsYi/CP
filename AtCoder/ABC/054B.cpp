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
	
	int n, m;
	cin >> n >> m;
	
	vector<string> ori(n), find(m);
	
	for (int i = 0 ; i < n ; ++i) {
		cin >> ori[i];
	}
	for (int i = 0 ; i < m ; ++i) {
		cin >> find[i];
	}
	
	if (n < m ) {
		cout << "No\n";
		return 0;
	}
	
	bool can = false;
	
	for (int i = 0 ; i < n - m  + 1 && !can; ++i) {
		for (int j = 0 ; j < n - m + 1 && !can; ++j) {
			bool curr = true;
			for (int z = 0, l = i ; z < m && !can ; ++z, ++l) {
				for (int k = 0, r = j ; k < m && !can; ++k, ++r) {
					if (ori[l][r] != find[z][k]) {
						curr = false;
						break;
					}
				}
			}
			can |= curr;
		}
	
	}
	
	
	if (can) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}