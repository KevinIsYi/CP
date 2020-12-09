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
	
	int ans = 1;
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if (a == c && b == d) {
		cout << "0\n";
	}
	
	else if ((abs(c - a) <= 2 && abs(d - b) <= 2)
		|| (a == c && abs(b - d) <= 3)
		|| (b == d && abs(a - c) <= 3)
		|| ((b % 2 == d % 2) && (a % 2 == c % 2)) {
		cout << "1\n";
	}
	else if ((abs(c - a) <= 
		
	}
	
	return 0;
}