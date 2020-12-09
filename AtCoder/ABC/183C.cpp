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

map<ll, ll> mp;
vector<vector<ll>> vct;
vector<bool> visited;
ll n;

void dfs(ll ori, ll ans, int reps) {
	
	visited[ori] = true;
	
	if ((ori == 0 && reps != n - 1)) {
		return;
	}
	
	for (ll i = 0 ; i < n ; ++i) {
		ans += 
	}
	
	
	for (ll i = 0 ; i < n ; ++i) {
		if (reps == n) {
			ans += vct[ori][i];
			mp[ans]++;
			break;
		}
		else {
			if ((!visited[i] && i != ori) || reps == n - 1) {
				ans += vct[ori][i];
				dfs(i, ans, reps + 1);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll k;
	cin >> n >> k;
	
	vct.assign(n, vector<ll>(n));
	
	for (ll i = 0 ; i < n ; ++i) {
		for (ll j = 0 ; j < n ; ++j) {
			cin >> vct[i][j];
		}
	}
	
	for (ll i = 1 ; i < n ; ++i) {
		visited.assign(n, false);
		dfs(i, vct[0][i], 0);
	}
	
	cout << mp[k] << "\n";
	
	return 0;
}