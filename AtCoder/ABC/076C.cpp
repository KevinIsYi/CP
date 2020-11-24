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

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s, t;
	cin >> s >> t;
	
	vector<string> ans;
	
	int len = (int)(s.size() - t.size()) + 1;
	len = max(0, len);
	
	for (int i = 0 ; i < len ; ++i) {
		string aux = s;
		
		for (int j = 0 ; j < (int)t.size() ; ++j) {
			if (i + j > (int)s.size() - 1) {
				break;
			}
			if (aux[i + j] == '?' || aux[i + j] == t[j]) {
				aux[i + j] = t[j];
			}
			else {
				break;
			}
			
			if (j == (int)t.size() - 1) {
				for (int k = 0 ; k < (int)aux.size() ; ++k) {
					if (aux[k] == '?') {
						aux[k] = 'a';
					}
				}
				ans.pb(aux);
			}
		}
	}
	
	sort(all(ans));
	
	if (ans.size() >= 1) {
		cout << ans[0];
	}
	else {
		cout << "UNRESTORABLE";
	}
	
	return 0;
}