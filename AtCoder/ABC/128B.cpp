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
	map<string, vector<pair<int, int>>> mp;
	
	for (int i = 0 ; i < n ; ++i) {
		string str;
		int x;
		cin >> str >> x;
		
		mp[str].pb(mp(x, i + 1));
	}
	
	for (auto pa : mp) {
		sort(allr(pa.second));
		for (pair<int, int> p : pa.second) {
			cout << p.second << "\n";
		}
	}
	
	return 0;
}