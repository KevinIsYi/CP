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
	set<int> first, second;
	
	bool can = false;
	
	
	for (int i = 0 ; i < m ; ++i) {
		int a, b;
		cin >> a >> b;
		
		if (a == 1) {
			first.insert(b);
		}
		if (b == 1) {
			first.insert(a);
		}
		if (a == n) {
			second.insert(b);
		}
		if (b == n) {
			second.insert(a);
		}
	}
	
	for (int val : first) {
		if (second.count(val)) {
			can = true;
			break;
		}
	}
	
	if (can) {
		cout << "POSSIBLE\n";
	}
	else {
		cout << "IMPOSSIBLE\n";
	}
	
	return 0;
}