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

bool range(int val, int a, int b) {
	return val >= a && val <= b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> vct(n);
	bool vals[] = {0, 0, 0, 0, 0, 0, 0, 0};
	int ans = 0;
	
	for (int & val : vct) {
		cin >> val;
		
		vals[0] |= range(val, 1, 399);
		vals[1] |= range(val, 400, 799);
		vals[2] |= range(val, 800, 1199);
		vals[3] |= range(val, 1200, 1599);
		vals[4] |= range(val, 1600, 1999);
		vals[5] |= range(val, 2000, 2399);
		vals[6] |= range(val, 2400, 2799);
		vals[7] |= range(val, 2800, 3199);
		
		ans += val >= 3200;
	}
	
	int colors = 0;
	for (bool val : vals) {
		colors += val;
	}
	
	ans += colors;
	
	cout << max(1, colors) << " " << ans << "\n";
	
	return 0;
}