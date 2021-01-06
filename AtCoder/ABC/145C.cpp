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

int n;
vector<bool> visited;
vector<vector<double>> vct;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	double sum = 0;
	cin >> n;
	
	vct.assign(n, vector<double>(2));
	
	for (vector<double> & v : vct) {
		for(double & val : v) {
			cin >> val;
		}
	}
	
	string str;
	double paths = 0;
	for (char chr = '0' ; chr < n + '0' ; ++chr) {
		str += chr;
		
	}
	
	do {
		for (int i = 1 ; i < n ; ++i) {
			sum += sqrt(pow(vct[str[i - 1] - '0'][0] - vct[str[i] - '0'][0], 2)
					+   pow(vct[str[i - 1] - '0'][1] - vct[str[i] - '0'][1], 2));
		}
		
		++paths;
	} while(next_permutation(all(str)));
	
	printf("%.12f\n", sum / paths);
	
	return 0;
}