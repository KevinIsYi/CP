#include "bits/stdc++.h"

using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb(x) push_back(x)

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {

template < class c > struct rge { c b, e; };
template < class c > rge<c> range(c i, c j) { return rge<c>{i, j}; }
template < class c > auto dud(c* x) -> decltype(cerr << *x, 0);
template < class c > char dud(...);

struct debug {
	~debug() { cerr << endl; }
	
	template < class c > typename \
	enable_if<sizeof dud<c>(0) != 1, debug&>::type operator<<(c i) {
		cerr << boolalpha << i;
		return * this;
	}
	
	template < class c > typename \
	enable_if<sizeof dud<c>(0) == 1, debug&>::type operator<<(c i) {
		return * this << range(begin(i), end(i)); 
	}
	
	template < class c, class b > debug & operator << (pair < b, c > d) {
		return * this << "(" << d.first << ", " << d.second << ")";
	}
	
	template < class c > debug & operator <<(rge<c> d) {
		*this << "[";
		for (auto it = d.b; it != d.e; ++it)
			*this << ", " + 2 * (it == d.b) << *it;
		return * this << "]";
	}
	
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "


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
	
	int h, w, x, y;
	cin >> h >> w >> x >> y;
	--x;
	--y;
	
	
	vector<string> vct(h);
	for (string & str : vct) {
		cin >> str;
	}
	
	int ans = 1;
	
	for (int i = y - 1 ; i >= 0 && vct[x][i] == '.' ; --i, ++ans) {
		debug() << imie(x) << imie(i);
	}	
	for (int i = y + 1 ; i < w && vct[x][i] == '.' ; ++i, ++ans) {
		debug() << imie(x) << imie(i);
	}
	for (int j = x - 1 ; j >= 0 && vct[j][y] == '.' ; --j, ++ans) {
		debug() << imie(j) << imie(y);
	}
	for (int j = x + 1 ; j < h && vct[j][y] == '.' ; ++j, ++ans) {
		debug() << imie(j) << imie(y);
	}
	
	cout << ans << "\n";
	
	return 0;
}
