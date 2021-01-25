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
	
	vector<int> time(n - 1), wait(n - 1), period(n - 1);
	for (int i = 0 ; i < n - 1 ; ++i) {
		cin >> time[i] >> wait[i] >> period[i];
	}
	
	
	
	for (int i = 0 ; i < n ; ++i) {
		int curr = 0;
		
		for (int j = i ; j < n - 1 ; ++j) {
			if (curr < wait[j]) {
				curr = wait[j];
			}
			else if(curr % period[j] != 0) {
				curr += period[j] - curr % period[j];
			}
			curr += time[j];
		}
		
		cout << curr << "\n";
	}
	return 0;
}