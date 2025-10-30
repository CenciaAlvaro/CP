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
 
array<bool, (int)1e3 * 8 + 5> memo;
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vi arr(n); 
    for (int& v : arr) cin >> v;
    memo.fill(false);
 
    for (int i = 1; i < n; i++) {
      int sum = arr[i];
      for (int j = i - 1; j >= 0; j--) {
        sum += arr[j];
        if (sum > (int)1e3 * 8) break;
        memo[sum] = true;
        //cout << sum << ' ';
      }
    }
    //cout << '\n';
 
    /*
    for (int i = 0; i < 50; i++) 
      if (memo[i]) cout << i << ' ';
    cout << '\n';
    */
 
    int ans = 0;
    for (int& v : arr)
      if (memo[v]) 
        ans++;
 
    cout << ans << '\n';
  }
 
 
 
  return 0;
}
