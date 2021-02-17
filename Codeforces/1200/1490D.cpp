#include <bits/stdc++.h>
 
using namespace std;
 
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
 
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
 
 
const int NAX = 100;
int n;
vector<bool> taken;
vector<int> vct;
vector<int> ans;

void findValue(int ori, int val) {	
	
	ans[ori] = val;
	taken[ori] = true;
	int big = 0, pos;
	for (int i = ori - 1 ; i >= 0 && !taken[i] ; --i) {
		if (vct[i] > big) {
			big = vct[i];
			pos = i;
		}
	}
	
	if (big != 0) {
		findValue(pos, val + 1);
	}
	
	big = 0;
	for (int i = ori + 1 ; i < n && !taken[i] ; ++i) {
		if (vct[i] > big) {
			big = vct[i];
			pos = i;
		}
	}
	
	if (big != 0) {
		findValue(pos, val + 1);
	}
}

void solve() {
	cin >> n;
	ans.assign(n, 0);
	vct.assign(n, 0);
	taken.assign(n, 0);
	
	int nax;
	
	for (int i = 0 ; i < n ; ++i) {
		cin >> vct[i];
		
		if (vct[i] == n) {
			nax = i;
		}
	}
	
	findValue(nax, 0);
	for (int i = 0 ; i < n ; ++i) {
		cout << ans[i] << " ";
	}
	cout << "\n";
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--) {
		solve();
	}
	
	return 0;
}