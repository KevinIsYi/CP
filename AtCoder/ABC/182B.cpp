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
	
	map<int, int> mp;
	int n;
	cin >> n;
	vector<int> vct(n);
	
	
	for (int i = 0 ; i < n ; ++i) {
		int x; 
		cin >> x;
		for (int j = 1 ; j * j <= x ; ++j) {
			if (x % j == 0) {
				mp[j]++;
				
				if (x / j != j) {
					mp[x / j]++;
				}
			}
		}
	}
	
	
	
	int ans, mx = 0;
	for (pair<int, int> pa : mp) {
		if (pa.second > mx && pa.first != 1) {
			mx = pa.second;
			ans = pa.first;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}