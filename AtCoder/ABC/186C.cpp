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

bool has7 (int n) {
	while(n > 0) {
		if (n % 10 == 7) {
			return true;
		}
		n /= 10;
	}
	return false;
}

int octal(int n) {
	int ten = 1, oct = 0;
	while(n != 0) {
		oct += (n % 8) * ten;
		ten *= 10;
		n /= 8;
	}
	return oct;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int ans = 0;
	
	cin >> n;
	
	for (int i = 1 ; i <= n ; ++i) {
		if (has7(i)) {
			++ans;
		}
	}
	
	for (int i = 7 ; i <= n ; ++i) {
		if (!has7(i)) {
			if (has7(octal(i))) {
				++ans;
			}
		}
	}
	
	cout << n - ans << "\n";
	
	return 0;
}