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

vector<vector<int>> graph;

void dfs(int v, vector<bool> & seen, int & res) {
	bool end = true;
	
	for (bool val : seen) {
		cout << val << " ";
	}
	
	for (int i = 0 ; i < (int)seen.size() ; ++i) {
		cout << seen[i] << " ";
		if (!seen[i] && i != v) {
			end = false;
		}
	}
	if (end) {
		++res;
		return;
	}
	
	seen[v] = true;
	for (int val : graph[v]) {
		if (seen[val]) {
			continue;
		}
		dfs(val, seen, res);
	}
	
	seen[v] = false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, ans = 0;
	cin >> n >> m;
	
	graph.assign(n, vector<int>());
	
	for (int i = 0 ; i < m ; ++i) {
		int a, b; cin >> a >> b;
		
		graph[a - 1].pb(b - 1);
		graph[b - 1].pb(a - 1);
	}
	
	for (vector<int> v : graph) {
		for (int val : v) {
			cout << val << " ";
		}
		cout << "\n";
	}
	
	vector<bool> seen(n, 0);
	
	dfs(0, seen, ans);
	
	cout << "\nans: " << ans << "\n";
	
	
	return 0;
}