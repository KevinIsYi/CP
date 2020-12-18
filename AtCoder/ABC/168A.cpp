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
	
	string str;
	cin >> str;
	
	char chr = str.back();
	
	if (chr == '2' || chr == '4' || chr == '5' || chr == '7' || chr == '9') {
		cout << "hon\n";
	}
	else if (chr == '0' || chr == '1' || chr == '6' || chr == '8') {
		cout << "pon\n";
	}
	else if (chr == '3') {
		cout << "bon\n";
	}
	
	return 0;
}