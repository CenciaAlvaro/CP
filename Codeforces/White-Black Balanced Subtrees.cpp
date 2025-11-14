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
 
int n;
int ans = 0;
vector<vector<int>> adj;
vector<char> col;
vector<int> dp;
 
void dfs(int u) {
  dp[u] = 0;
  for (int& v : adj[u])
    if (dp[v] == -1) {
      dfs(v);
      dp[u] += dp[v];
    }
 
  dp[u] += col[u] == 'B' ? 1 : -1;
  if (dp[u] == 0) ans++;
}
 
 
    
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    ans = 0;
    cin >> n;
    adj.assign(n, vector<int>());
    col.assign(n, '.');
    dp.assign(n, -1);
    for (int i = 1; i < n; i++) {
      int v; cin >> v; v--;
      adj[v].push_back(i);
    }
    /*
    for (int u = 0; u < n; u++) {
      cout << u << "->";
      for (int& v : adj[u])
        cout << v << ' ';
      cout << '\n';
    }
    */
    cout.flush();
    for (int i = 0; i < n; i++) 
      cin >> col[i];
 
    dfs(0);
    cout << ans << '\n';
  }
 
  return 0;
}
