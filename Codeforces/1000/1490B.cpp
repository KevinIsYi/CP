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
 
void solve() {
	int n;
	cin >> n;
	
	vector<int> vct(3);
	for (int i = 0 ; i < n ; ++i) {
		int x; cin >> x;
		
		vct[x % 3]++;
	}
	
	int ans = 0;
	for (int i = 0 ; i < 3 ; ++i) {
		if (vct[i] > n / 3) {
			for (int limit = 1, j = i + 1 ; limit <= 2 ; ++limit, ++j) {
				j %= 3;
				if (vct[j] < n / 3) {
					int give = min(vct[i] - (n / 3), (n / 3) - vct[j]);
					
					vct[j] += give;
					ans += give * limit;
				}
			}
		}
	}

	cout << ans << "\n";
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--) {
		solve();
	}
	
	return 0;
}