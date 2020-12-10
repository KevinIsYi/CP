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
	double manh = 0, eucl = 0, cheb = -1, x;
	
	cin >> n;
	for (int i = 0 ; i < n ; ++i) {
		cin >> x;
		
		manh += abs(x);
		eucl += (x * x);
		cheb = max(cheb, abs(x));
	}
	
	
	printf("%.15f\n%.15f\n%.15f", manh, sqrt(eucl), cheb);
	
	
	return 0;
}