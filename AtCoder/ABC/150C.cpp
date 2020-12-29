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
	vector<int> a(n), b(n);
	
	for (int & val : a) {
		cin >> val;
		--val;
	}
	for (int & val : b) {
		cin >> val;
		--val;
	}
	
	vector<int> vct(n);
	map<vector<int>, int> ord;
	for (int i = 0 ; i < n ; ++i) {
		vct[i] = i;
	}
	
	int i = 0;
	do {
		ord[vct] = i++;	
		
	} while(next_permutation(vct.begin(), vct.end()));
	
	cout << abs(ord[a] - ord[b]) << "\n";
	
	return 0;
}