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
	
	int n, d;
	
	cin >> n >> d;
	vector<vector<double>> vct(n, vector<double>(d));
	
	for (vector<double> & v : vct) {
		for (double & val : v) {
			cin >> val;
		}
	}
	
	int ans = 0;
	for (int i = 0 ; i < n ; ++i) {
		for (int j = i + 1 ; j < n ; ++j) {
			double curr = 0;
			
			for (int k = 0 ; k < d ; ++k) {
				curr += pow(vct[i][k] - vct[j][k], 2);
			}
			
			curr = sqrt(curr);
			if (curr / (long long)curr == 1) {
				++ans;
			}
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}