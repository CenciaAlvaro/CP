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
 
bool f(string str1, string str2) {
  return (str1[0] == str2[0] && str1[1] != str2[1] ||
          str1[0] != str2[0] && str1[1] == str2[1]);
}
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<string, int> mp;
    vector<string> arr(n);
    for (string& s : arr) {
      cin >> s;
      mp[s]++;
    }
 
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      string str = arr[i];
      for (auto& [s, v] : mp)
        if (f(s, str))
         ans += v;
      mp[str]--;
    } 
    cout << ans << '\n';
  }
 
  return 0;
}
