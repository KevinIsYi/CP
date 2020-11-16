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
	
	int n, a = 0, b = 0, c = 0;
	cin >> n;
	
	for (int i = 0 ; i < n ; ++i) {
		int x; cin >> x;
		
		if (x % 2 == 0 && x % 4 != 0) {
			++a;
		}
		else if (x % 4 == 0) {
			++b;
		}
		else {
			++c;
		}
	}
	
	c += a % 2;
	
	if (b + 1 >= c) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}