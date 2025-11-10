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
const int LOG = 31;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;

  while (t--) {
    int n, k; cin >> n >> k;
    vi arr(n);
    for (int& v : arr) cin >> v;

    vector<int> ones(LOG, 0);
    for (int& v : arr)
      for (int b = 0; b < LOG; b++) 
        if (v & (1 << b))
          ones[b]++;
    
    int ans = 0;
    for (int b = LOG - 1; b >= 0; b--) {
      int val = n - ones[b];
      if (val <= k) {
        k -= val;
        ans = ans | (1 << b);
      }
    }
    cout << ans << '\n';
  }


  return 0;
}
