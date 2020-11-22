#include <bits/stdc++.h>
using namespace std;
 
#define fast ios::sync_with_stdio(false);cin.tie(0); cout.tie(0)
 
typedef long long ll;
typedef long double ld;
const ll inf = (ll)1e14;
const ll N = (ll)1e6;
 
ll arr[6];
ld ret;
ll sol,sugar;
 
int main() {
    fast;
    for (int i = 0; i < 6; i++) cin >> arr[i];
 
    arr[0] = 100 * arr[0];
    arr[1] = 100 * arr[1];
 
    for (ll i = 0; i * arr[0] <= arr[5]; i++) {
 
        for (ll j = 0; i * arr[0] + j * arr[1] <= arr[5]; j++) {
 
            ll water = i * arr[0] + j * arr[1];
 
            for (ll p = 0; p * arr[2] * 100 <= arr[4] * water and (p * arr[2] + water) <= arr[5]; p++) {
 
                for (ll q = 0; (p * arr[2] + q * arr[3]) * 100 <= arr[4] * water and
                               (p * arr[2] + q * arr[3] + water) <= arr[5]; q++) {
 
                    ll sug = p * arr[2] + q * arr[3];
 
                    if (ret < ld(sug) * 100 / (water + sug)) {
                        ret = ld(sug) * 100 / (water + sug);
                        sol = water + sug;
                        sugar = sug;
                    }
 
                }
 
            }
        }
    }
 
//    cout << ret << endl;
    if (!sol) sol = arr[0];
    cout << sol << " " << sugar << endl;
    return 0;
}