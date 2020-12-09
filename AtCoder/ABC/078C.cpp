#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m; cin >> n >> m;
 
    double time = m * 1900 + (n - m) * 100;
    double p = double(1) - double(1) / double(1 << m);
    double pp = p;
 
    double ex = 0;
 
    for(int i = 1; i <= 10000; i++)
    {
        ex += double(i) * time * pp;
        pp *= p;
    }
 
    double ip = double(1) - p;
 
    ex *= ip;
 
    ex += time;
 
    cout << llround(ex) << endl;
    return 0;
}