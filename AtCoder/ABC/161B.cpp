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
	
	double m, n, nax, sum = 0;
	int count = 0;
	
	cin >> n >> m;
	vector<int> vct(n);
	
	for (int i = 0 ; i < n ; ++i) {
		double x; cin >> x;
		vct[i] = x;
		sum += x;
		
	}
	
	nax = sum / (4 * m);
	for (int val : vct) {
		count += val >= nax;
	}
	
	
	if (count >= m) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	
	return 0;
}