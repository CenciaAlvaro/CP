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
 
struct Fenwick {
  int n;
  vll bit;
  Fenwick(int n) : n(n), bit(n + 1) {}
  void update(int i, ll val) {
    for (; i <= n; i += i & -i)
      bit[i] += val;
  }
  ll query(int i) {
    ll sum = 0;
    for (; i > 0; i -= i & -i)
      sum += bit[i];
    return sum;
  }
};
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    Fenwick fen(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      int v; cin >> v;
      ans += fen.query(v);
      fen.update(1, 1);
      if (v + 1 <= n)
        fen.update(v + 1, -1);
    }
    cout << ans << '\n';
  }
 
  return 0;
}

