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
    int n, K; cin >> n >> K;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      int v; cin >> v;
      mp[v]++;
    }
    vi arr;
    for (auto& [k, v] : mp)
      if (v >= K) arr.push_back(k);
 
    //for (int& v : arr) cout << v << ' '; cout << '\n';
    int mx = -1;
    pair<int, int> ans;
    for (int l = 0; l < arr.size();) {
      int r = l;
      int cn = 0;
      while (++r < arr.size()) {
        if (arr[r - 1] + 1 != arr[r]) break;
        cn++;
      }
      r--;
      if (cn > mx) {
        mx = cn;
        ans.first = arr[l], ans.second = arr[r];
      }
      l = r + 1;
    }
 
    if (mx == -1) { cout << -1 << '\n'; continue; }
    cout << ans.first << ' ' << ans.second << '\n';
  }
 
 
  return 0;
}
