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
	
	int n;
	
	cin >> n;
	vector<vector<int>> vct(n, vector<int>(3));
	
	for (vector<int> & v : vct) {
		for (int & val : v) {
			cin >> val;
		}
	}
	
	int time = 0, x = 0, y = 0;
	bool can = true;
	
	for (vector<int> v : vct) {
		int curr = abs(x - v[1]) + abs(y - v[2]);
		
		time = v[0] - time;
		
		if (curr > time || (time % 2 != curr % 2)) {
			can = false;
			break;
		}
		
		x = v[1];
		y = v[2];
		time = v[0];
	}
	
	if (can) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	
	return 0;
}