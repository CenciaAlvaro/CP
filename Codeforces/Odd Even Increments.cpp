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
  function<bool(vi&)> f = [&](vi& arr) {
    bool even = true, odd = true;
    for (int& v : arr)
      if (v & 1) odd = false;
      else even = false;
    return even || odd;
  };
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vi arr(n);
    for (int& v : arr) cin >> v;
    vi arr_e, arr_o;
    for (int i = 0; i < n; i++)
      if (i & 1) arr_o.push_back(arr[i]);
      else arr_e.push_back(arr[i]);
    if (f(arr_e) && f(arr_o)) cout << "YES\n";
    else cout << "NO\n";
  }
 
  return 0;
}
