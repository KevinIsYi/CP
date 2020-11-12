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
	
	int a, b;
	cin >> a >> b;
	
	vector<string> vct(a);
	
	for (string & str : vct) {
		cin >> str;
	}
	
	for (int i = 0 ; i <= b + 1 ; ++i) {
		cout << '#';
	}
	cout << "\n";
	
	for (string str : vct) {
		for (int i = 0 ; i < b ; ++i) {
			if (i == 0) {
				cout << '#';
			}
			cout << str[i];
			if (i == b - 1) {
				cout << '#';
			}
		}
		cout << "\n";
	}
	for (int i = 0 ; i <= b + 1 ; ++i) {
		cout << '#';
	}
	
	return 0;
}