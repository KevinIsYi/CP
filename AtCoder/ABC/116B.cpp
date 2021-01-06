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
	
	int s;
	cin >> s;
	set<int> st = {s};
	
	for (int i = 2 ; ; ++i) {
		if (s % 2 == 0) {
			s /= 2;
		}
		else {
			s = 3 * s + 1;
		}
		
		
		if (st.count(s)) {
			cout << i << "\n";
			break;
		}
		st.insert(s);
	}
	
	
	return 0;
}