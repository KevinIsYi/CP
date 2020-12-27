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
	
	int n, m;
	cin >> n >> m;
	
	string str(n, '?');
	bool can = true;
	
	for (int i = 0 ; i < m ; ++i) {
		int a, b;
		cin >> a >> b;
		
		if (str[a - 1] == '?') {
			str[a - 1] = b + '0';
		}
		else {
			if (str[a - 1] != char(b + '0')) {
				can = false;
			}
		}
	}
	
	if (!can || (str[0] == '0' && n > 1)) {
		cout << "-1\n";
	}
	else {
		if (n > 1) {
			for (int i = 0 ; i < n ; ++i) {
				if (i == 0 && str[i] == '?') {
					cout << "1";
				}
				else if (str[i] == '?') {
					cout << "0";
				}
				else {
					cout << str[i];
				}
			}
		}
		else {
			if (str[0] == '?') {
				cout << "0";
			}
			else {
				cout << str[0];
			}
		}
		
		
	}
	
	return 0;
}