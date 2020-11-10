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

map<char, int> intersection(map<char, int> a, map<char, int> b) {
	map<char, int> inter;
	
	for (pair<char, int> pa : a) {
		char chr = pa.first;
		if (b.count(chr)) {
			inter[chr] = min(a[chr], b[chr]);
		}
	}
	
	return inter;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	string str;
	map<char, int> ans;
	
	cin >> n;
	vector<string> vct(n);
	
	for (string & str : vct) {
		cin >> str;
	}
	
	for (char chr : vct[0]) {
		ans[chr]++;
	}
	
	for (int i = 1 ; i < n ; ++i) {
		map<char, int> aux;
		for (char chr : vct[i]) {
			aux[chr]++;
		}
		
		ans = intersection(ans, aux);
	}
	
	for (pair<char, int> mp : ans) {
		for (int i = 0 ; i < mp.second ; ++i) {
			cout << mp.first;
		}
	}
	
	cout << "\n";
	
	return 0;
}