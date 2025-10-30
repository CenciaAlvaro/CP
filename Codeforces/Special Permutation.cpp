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
    if (n < 4) { cout << -1 << '\n'; continue; }
    vi arr;
    for (int i = 2; i <= n; i += 2)
      arr.push_back(i);
 
    arr.push_back(arr.back() - 3);
    arr.push_back(arr.back() + 4);
    arr.push_back(arr.back() - 2);
    arr.push_back(arr.back() - 4);
    
    while (arr.back() > 0) 
      arr.push_back(arr.back() - 2);
 
    vi ans;
    for (int& v : arr)
      if (1 <= v && v <= n) ans.push_back(v);
 
    for (int& v : ans) cout << v << ' '; cout << '\n';
  }
  return 0;
}
