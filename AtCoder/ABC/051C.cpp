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


int main() {
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    int dx = tx - sx, dy = ty - sy;
    
    string res;

    for (int i = 0; i < dx; ++i) 
		res += "R";
    for (int i = 0; i < dy; ++i) 
		res += "U";
    for (int i = 0; i < dx; ++i) 
		res += "L";
    for (int i = 0; i < dy; ++i) 
		res += "D";

    res += "D";
    for (int i = 0; i <= dx; ++i) 
		res += "R";
    for (int i = 0; i <= dy; ++i) 
		res += "U";
	
    res += "L";
    res += "U";
	
    for (int i = 0; i <= dx; ++i) 
		res += "L";
    for (int i = 0; i <= dy; ++i) 
		res += "D";
	
    res += "R";
    cout << res << endl;
	
	return 0;
}