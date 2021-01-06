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

bool base(int n) {
	set<int> st;
	
	while(n > 0) {
		st.insert(n % 10);
		n /= 10;
	}
	
	return st.size() == 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	
	cin >> n;
	
	for (int i = n ; ; ++i) {
		if (base(i)) {
			cout << i << "\n";
			break;
		}
	}
	
	return 0;
}