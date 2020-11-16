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
	long long sum = 0, ans;
	
	vector<int> vct(n);
	for (int & val : vct) {
		cin >> val;
		sum += val;
	}
	
	ans = 1e18;
	long long curr = 0;
	for (int i = 0 ; i < n - 1 ; ++i) {
		curr += vct[i];
		ans = min(ans, abs(sum - curr - curr));
	}
	
	cout << ans << "\n";
	
	
	return 0;
}