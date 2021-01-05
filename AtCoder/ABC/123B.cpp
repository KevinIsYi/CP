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
	
	int ans = 0, sum = 0, nax = 0, pos;
	vector<int> vct(5);
	for (int i = 0 ; i < 5 ; ++i) {
		cin >> vct[i];
		
		int curr = 10 - vct[i] % 10;
		if (vct[i] % 10 != 0 && curr > nax) {
			nax = curr;
			pos = i;
		}
	}
	
	for (int i = 0 ; i < 5 ; ++i) {
		ans += vct[i];
		
		if (i != pos && vct[i] % 10 != 0) {
			ans += 10 - (vct[i] % 10);
		}
	}
	
	
	cout << ans << "\n";
	
	return 0;
}