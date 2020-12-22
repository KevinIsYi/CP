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

bool isPalindrome(string str, int i, int j) {
	--i;
	--j;
	
	for (i ; i < j ; ++i, --j) {
		if (str[i] != str[j]) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	cin >> str;
	
	int len = (int)str.size();
	
	if (isPalindrome(str, 1, len) && isPalindrome(str, 1, ((len - 1) / 2)) && isPalindrome(str, (len + 3) / 2, len)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}