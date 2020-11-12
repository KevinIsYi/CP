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
	
	ll h, w, ans;
	cin >> h >> w;
	ans = h * w;
	ll s[3];
	
	for (int i = 0 ; i < 2 ; ++i) {
		for (ll j = 1 ; j < h ; ++j) {
			s[0] = j * w;
			s[1] = (h - j) * (w / 2);
			s[2] = h * w - (s[0] + s[1]);
			sort(s, s + 3);
			ans = min(ans, s[2] - s[0]);
			
			s[0] = j * w;
			s[1] = ((h - j) / 2) * w;
			s[2] = h * w - (s[0] + s[1]);
			sort(s, s + 3);
			sort(s, s + 3);
			ans = min(ans, s[2] - s[0]);
		}
		
		swap(h, w);
	}
	
	cout << ans << "\n";
	
	
	
	return 0;
}