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
	
	int sum = 0, digits = 0, ans = 50;
	ll n;
	bool can = false;
	
	cin >> n;
	
	ll aux = n;
	while(aux > 0) {
		++digits;
		sum += aux % 10;
		aux /= 10;
	}
	
	for (int i = 0 ; i < digits ; ++i) {
		int curr = sum;
		aux = n;
		
		for (int j = i + 1 ; j <= digits && aux % 3 != 0 ; ++j) {
			if (aux % (10 * j) % 3 != 0) {
				aux -= (10 * j);
			}
		}
		
		if (sum % 3 == 0) {
			can = true;
			break;
		}
		
		ans = min(curr, ans);
	}
	
	if (can) {
		cout << ans << "\n";
	}
	else {
		cout << "-1\n";
	}
	
	return 0;
}