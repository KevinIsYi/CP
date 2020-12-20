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
	
	int a, b, c, d, pos = 0;
	cin >> a >> b >> c >> d;
	
	while(true) {
		if (pos == 0) {
			c -= b;
			
			if (c <= 0) {
				break;
			}
		}
		else {
			a -= d;
			if (a <= 0) {
				break;
			}
		}
		
		++pos;
		pos %= 2;
	}
	
	if (pos == 0) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}