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
	
	int n, m;
	cin >> n >> m;
	map<int, vector<string>> mp;
	
	for (int i = 0 ; i < m ; ++i) {
		int x;
		string str;
		cin >> x >> str;
		
		mp[x].pb(str);
	}
	
	int penaltie = 0, solve = 0;
	for (pair<int, vector<string>> pa : mp) {
		bool can = false;
		int curr = 0;
		
		for (string str : pa.second) {
			if (str == "AC") {
				can = true;
				break;
			}
			++curr;
		}
		
		if (can) {
			penaltie += curr;
			++solve;
		}
	}
	
	cout << solve << " " << penaltie << "\n";
	
	return 0;
}