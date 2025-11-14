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
    for (int& v : arr) cin >> v;
 
    int mn = arr[0];
    for (int& v : arr) mn = min(mn, v);
    ll sum = 0;
    for (int& v : arr) if (v > mn) sum += (v - mn);
    cout << sum << '\n';
  }
  return 0;
}
