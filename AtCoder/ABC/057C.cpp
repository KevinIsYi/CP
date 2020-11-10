#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)

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

int digits(long long n) {
	int ans = 0;
	while(n > 0) {
		++ans;
		n /= 10;
	}
	
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n;
	int ans = 1e9;
	
	cin >> n;
	
	for (long long i = 1 ; i * i <= n ; ++i) {
		if (n % i == 0) {
			int curr = max(digits(i), digits(n / i));
			int aux = 1e9;
			
			if (n / i != i) {
				aux = max(digits(n / i), digits(n / (n / i)));
			}
			
			ans = min(curr, aux);
		}
	}
	
	
	cout << ans << "\n";
	
	return 0;
}