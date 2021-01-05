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
	bool first = false, second = false;
	
	cin >> str;
	int firstPart = ((str[0] - '0') * 10) + (str[1] - '0');
	int secondPart = ((str[2] - '0') * 10) + (str[3] - '0');
	
	first |= (firstPart > 0 && firstPart <= 12);
	second |= (secondPart > 0 && secondPart <= 12);
	
	if (first && second) {
		cout << "AMBIGUOUS\n";
	}
	else if (first) {
		cout << "MMYY\n";
	}
	else if (second) {
		cout << "YYMM\n";
	}
	else {
		cout << "NA\n";
	}
	
	return 0;
}