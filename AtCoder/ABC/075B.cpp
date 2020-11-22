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

vector<string> vct;
int h, w;

int adj(int i, int j) {
	
	int ans = 0;
	
	
	int a, b, c, d;
	a = max(0, i - 1);
	b = min(i + 1, h);
	c = max(0, j - 1);
	d = min(j + 1, w);
	
	
	for (int k = a ; k <= b ; ++k) {
		for (int z = c ; z <= d ; ++z) {
			if (i != k || j != z) {
				ans += vct[k][z] == '#';
			}
		}
	}
	
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> h >> w;
	
	
	--h; --w;
	
	for (int i = 0 ; i <= h; ++i) {
		string str;
		cin >> str;
		vct.pb(str);
	}
	
	
	for (int i = 0 ; i <= h ; ++i) {
		for (int j = 0 ; j <= w ; ++j) {
			if (vct[i][j] == '#') {
				cout << '#';
			}
			else {
				cout << adj(i, j);
			}
		}
		cout << "\n";
	}
	
	return 0;
}