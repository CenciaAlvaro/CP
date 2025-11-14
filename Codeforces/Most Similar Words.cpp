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
 
int m;
 
ll func(string& a, string& b) {
  int sum = 0;
  for (int i = 0; i < m; i++)
    sum += abs(a[i] - b[i]);
  return sum;
}
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n >> m;
    vector<string> arr(n);
    for (string& s : arr) cin >> s;
 
    ll mn = LLINF;
    for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++) 
        mn = min(mn, func(arr[i], arr[j]));
 
    cout << mn << '\n';
  }
 
 
  return 0;
}
