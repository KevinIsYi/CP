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
	
	int h, w;
	cin >> h >> w;
	
	set<int> hor, ver;
	vector<string> vct(h);
	
	for (string & str : vct) {
		cin >> str;
	}
	
	for (int i = 0 ; i < h ; ++i) {
		for (int j = 0 ; j < w ; ++j) {
			if (vct[i][j] == '#') {
				hor.insert(i);
				ver.insert(j);
			}
		}
	}
	
	
	for (int i = 0 ; i < h ; ++i) {
		if (hor.count(i)) {
			for (int j = 0 ; j < w; ++j) {
				if (ver.count(j)) {
					cout << vct[i][j];
				}
			}
			cout << "\n";
		}
	}
	
	return 0;
}