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
	vector<int> vct(n), ans(n);
	
	for (int & val : vct) {
		cin >> val;
	}
	
	for (int i = n - 1, l = 0, r = n - 1, j = 0 ; i >= 0 ; --i, ++j) {
		if (j % 2 == 0) {
			ans[l++] = vct[i];
		}
		else {
			ans[r--] = vct[i];
		}
	}
	
	for (int val : ans) {
		cout << val << " ";
	}
	
	return 0;
}