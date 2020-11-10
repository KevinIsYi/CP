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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	vector<pair<int, int>> st(n), ch(m);
	
	for (pair<int, int> & pa : st) {
		cin >> pa.first >> pa.second;
	}
	
	for (pair<int, int> & pa : ch) {
		cin >> pa.first >> pa.second;
	}
	
	for (pair<int, int> student : st) {
		int curr = abs(student.first - ch[0].first) + abs(student.second - ch[0].second);
		int ans = 1;
		for (int i = 1 ; i < m ; ++i) {
			int aux = abs(student.first - ch[i].first) + abs(student.second - ch[i].second);
			
			if (aux < curr) {
				curr = aux;
				ans = i + 1;
			}
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}