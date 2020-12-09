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
	set<pair<int, int>> st;
	map<int, int> mp;
	map<pair<int, int>, int> mpairs;
	vector<pair<int, int>> vct(n);
	int limx = -1e4, limy = -1e4, limxleft = 1e4, limytop = 1e4;
	bool can = false;
	
	for (pair<int, int> & pa : vct) {
		cin >> pa.first >> pa.second;
		
		if (++mp[pa.first] >= 3 || ++mp[pa.second] >= 3)  {
			can = true;
		}
		
		limx = max(limx, pa.first);
		limy = max(limy, pa.second);
		limxleft = min(limxleft, pa.first);
		limytop = min(limytop, pa.second);
		st.insert(mp(pa.first, pa.second));
	}
	
	for (pair<int, int> pa : vct) {
		int a = pa.first, b = pa.second, curr = 0;
		for (int i = a, j = b ; i <= limx && j <= limy; ++i, ++j) {
			curr += st.count(mp(i, j));
		}
		
		for (int i = a, j = b; i <= limx && j >= limytop ; ++i, --j) {
			curr += st.count(mp(i, j));
		}
		
		if (curr >= 3) {
			can = true;
			break;
		}
	}
	
	if (can) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	return 0;
}