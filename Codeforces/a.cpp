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
    ll l = 1, r = 1e9 * 4;
    ll ans = -1;
    while (l <= r) {
      ll v = l + (r - l) / 2;
      ll val = k + v / n;
      if (v >= val) { ans = val; r = v - 1; }
      else if (v < val) l = v + 1;
    }
    cout << ans << '\n';
  }
  return 0;
}
