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
	vector<int> vct(n);
	
	for (int & val : vct) {
		cin >> val;
	}
	sort(allr(vct));
	
	vector<int> prev, aft;
	for (int i = 1 ; i < n ; ++i) {
		if (i % 2 == 0) {
			prev.pb(vct[i]);
		}
		else {
			aft.pb(vct[i]);
		}
	}

	sort(all(prev));
	sort(allr(aft));
	
	for (int val : prev) {
		cout << val << " ";
	}
	cout << vct[0];
	for (int val : aft) {
		cout << " " << val;
	}
	
	
	return 0;
}