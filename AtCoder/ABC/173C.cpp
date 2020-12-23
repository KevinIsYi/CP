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
	
	int h, w, k;
	cin >> h >> w >> k;
	vector<string> grid(h), aux(h);
	
	for (string & str : grid) {
		cin >> str;
	}
	
	
	int ans = 0;
	
	for (int maskH = 0 ; maskH < (1 << h) ; ++maskH) {
		for (int maskW = 0 ; maskW < (1 << w) ; ++maskW) {
			for (int y = 0 ; y < h ; ++y) {
				aux[y] = grid[y];
			}
			for (int y = 0 ; y < h ; ++y) {
				if (maskH & (1 << y)) {
					for (int x = 0 ; x < w ; ++x) {
						aux[y][x] = 'R';
					}
				}
			}
			for (int x = 0 ; x < w ; ++x) {
				if (maskW & (1 << x)) {
					for (int y = 0 ; y < h ; ++y) {
						aux[y][x] = 'R';
					}
				}
			}
			
			int cnt = 0;
			for (int x = 0 ; x < w ; ++x) {
				for (int y = 0 ; y < h ; ++y) {
					cnt += aux[y][x] == '#';
				}
			}
			
			ans += cnt == k;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}