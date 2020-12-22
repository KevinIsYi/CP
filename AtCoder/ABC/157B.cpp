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

bool checked[3][3];
int grid[3][3];
map<int, pair<int, int>> mp;

bool check() {
	
	for (int i = 0 ; i < 3 ; ++i) {
		if ((checked[1][i] && checked[0][i] && checked[2][i]) || 
			(checked[i][1] && checked[i][0] && checked[i][2])) {
			return true;
		}
	}
	
	if (checked[1][1] && ((checked[0][0] && checked[2][2]) || (checked[0][2] && checked[2][0]))) {
		return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for (int i = 0 ; i < 3 ; ++i) {
		for (int j = 0 ; j < 3 ; ++j) {
			cin >> grid[i][j];
			mp[grid[i][j]] = mp(i, j);
		}
	}
	
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; ++i) {
		int x; cin >> x;

		if (mp.count(x)) {
			pair<int, int> pa = mp[x];
			checked[pa.first][pa.second] = true;
		}
	}
	
	if (check()) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}