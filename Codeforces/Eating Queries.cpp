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
    int n, q; cin >> n >> q;
    vi arr(n);
    for (int& v : arr) cin >> v;
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    vll pre(n + 1);
    for (int i = 0; i < n; i++)
      pre[i + 1] = arr[i] + pre[i];
 
    while (q--) {
      ll x; cin >> x;
      auto it = lower_bound(pre.begin(), pre.end(), x);
      if (it == pre.end()) cout << -1 << '\n'; 
      else cout << it - pre.begin() << '\n';
    }
  }
 
  return 0;
}
