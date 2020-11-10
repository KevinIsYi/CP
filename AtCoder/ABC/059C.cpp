#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (auto &i : a) {
        cin >> i;
    }
	
    auto check = [&](int sign) {
        ll cost = 0; 
        ll sum  = 0;
        auto v  = a;
        for (auto & i : v) {
            sum += i;
            if (sign * sum < 0) {
                cost += abs(sum) + 1;
                sum += -sum + sign;
            }
            if (sum == 0) {
                cost++;
                sum = sign;
            }
            sign *= -1;
        }
        return cost;
    };

    ll ans = min(check(1), check(-1));
    cout << ans << endl;

    return 0;
}