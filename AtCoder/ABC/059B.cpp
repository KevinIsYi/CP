#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)

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
	
	string a, b;
	cin >> a >> b;
	
	if (a.size() > b.size()) {
		cout << "GREATER\n";
	}
	else if (b.size() > a.size()) {
		cout << "LESS\n";
	}
	else {
		if (a == b) {
			cout << "EQUAL\n";
		}
		else if (a > b) {
			cout << "GREATER\n";
		}
		else {
			cout << "LESS\n";
		}
	}
	
	return 0;
}