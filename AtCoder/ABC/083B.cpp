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

int sum(int n) {
	int ans = 0;
	while(n > 0) {
		ans += n % 10;
		n /= 10;
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b, ans = 0;
	
	cin >> n >> a >> b;
	
	for (int i = 1 ; i <= n ; ++i) {
		int curr = sum(i);
		
		if (curr >= a && curr <= b) {
			ans += i;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}