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
	
	string str;
	int a, b, c, d;
	int sign[] = {1, -1};
	bool find = false;
	
	cin >> str;
	a = str[0] - '0';
	b = str[1] - '0';
	c = str[2] - '0';
	d = str[3] - '0';
	
	for (int i = 0 ; i < 2 && !find ; ++i) {
		for (int j = 0 ; j < 2 && !find; ++j) {
			for (int k = 0 ; k < 2 ; ++k) {
				if (a + (b * sign[i]) + (c * sign[j]) + (d * sign[k]) == 7) {
					cout << a << (i == 0 ? '+' : '-') 
						<< b << (j == 0 ? '+' : '-')
						<< c << (k == 0 ? '+' : '-')
						<< d << "=7\n";
					find = true;
					break;
				}
			}
		}
	}
	
	return 0;
}