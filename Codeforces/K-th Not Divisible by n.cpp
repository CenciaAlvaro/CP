#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
 
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    ll n, k; cin >> n >> k;
    ll l = 1, r = (int)1e9 * 2 + 10;
    ll ans = -1;
    while (l <= r) {
      ll m = l + (r - l) / 2;
      ll val = k + m / n;
      if (m < val) l = m + 1;
      else { r = m - 1; ans = val; }
    }
    cout << ans << '\n';
  }
  return 0;
}
