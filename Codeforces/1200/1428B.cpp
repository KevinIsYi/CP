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

void solve() {
	int n;
	string str;
	cin >> n >> str;
	
	bool clock = false, anticlock = false;
	for (char chr : str) {
		if (chr == '>') {
			clock = true;
		}
		else if (chr == '<') {
			anticlock = true;
		}
	}

	if (clock && anticlock) {
		int ans = 0;
		for (int i = 0 ; i < n ; ++i) {
			if (str[i] == '-' || str[(i + 1) % n] == '-') {
				++ans;
			}
		}
		cout << ans << "\n";
	}
	else {
		cout << n << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--) {
		solve();
	}
	
	return 0;
}