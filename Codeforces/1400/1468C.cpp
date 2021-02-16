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
	
	int t, queries = 0;
	cin >> t;
	
	set<pair<int, int>> st;
	vector<bool> vct(t, false);
	
	for (int i = 0, number = 0, last = 1 ; i < t ; ++i) {
		int x; cin >> x;
		
		if (x == 1) {
			int val; cin >> val;
			st.insert(mp(-val, ++number));
		}
		
		else if (x == 2) {
			while(vct[last]) {
				++last;
			}
			cout << last << " ";
			vct[last] = true;
			++last;
		}
		else {
			while(vct[(*st.begin()).second]) {
				st.erase(st.begin());
			}
			int aux = (*st.begin()).second;
			cout << aux << " ";
			vct[aux] = true;
			st.erase(st.begin());
		}
		
	}
	
	

	
	
	return 0;
}