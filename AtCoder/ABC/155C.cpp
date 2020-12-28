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
	
	int n, nax = 0;
	map<string, int> mp;
	cin >> n;
	
	for (int i = 0 ; i < n ; ++i) {
		string str; cin >> str;
		mp[str]++;
		nax = max(nax, mp[str]);
	}
	
	set<string> ans;
	for (pair<string, int> pa : mp) {
		if (pa.second == nax) {
			ans.insert(pa.first);
		}
	}
	
	for (string str : ans) {
		cout << str << "\n";
	}
	
	
	
	
	return 0;
}