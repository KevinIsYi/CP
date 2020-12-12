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
	
	ll n, ans = 0;
	vector<ll> vct;
	cin >> n;
	
	for (int i = 0 ; i < n ; ++i) {
		ll x;
		cin >> x;
		
		vct.pb(x);
	}
	
	int len = (int)vct.size();
	for (int i = 0 ; i < len ; ++i) {
		for (int j = i + 1 ; j < len ; ++j) {
			for (int k = j + 1 ; k < len ; ++k) {
				int a = vct[i], b = vct[j], c = vct[k];

				if (a != b && b != c && a != c) {
					vector<ll> aux = {a, b, c};
					
					sort(all(aux));
					
					if (aux[0] + aux[1] > aux[2]) {
						++ans;
					}
				}
			}
		}
	}
	
	cout << ans << "\n";
	
	
	return 0;
}