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
    int n; cin >> n;
    vi arr(n);
    map<int, int> mp;
    for (int& v : arr) {
      cin >> v;
      mp[v]++;
    }
    int ans = -1;
    for (auto& [k, v] : mp)
      if (v >= 3) ans = k;
    cout << ans << '\n';
  }
  return 0;
}
