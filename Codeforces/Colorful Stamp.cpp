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
 
bool f(string& s) {
  if (s.size() < 2) return false;
  bool a, b; a = b = false;
  for (char& c : s)
    if (c == 'R') a = true;
    else b = true;
  return a && b;
}
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string str; cin >> str;
    string s = "";
    bool valid = true;
    for (int i = 0; i < str.size(); i++) {
      char c = str[i];
      if (c == 'W') continue;
      s.push_back(c);
      if (i + 1 == n || str[i + 1] == 'W') {
        valid = valid && f(s);
        s = "";
      }
    }
    cout << (valid ? "YES" : "NO") << '\n';
  }
 
 
  return 0;
}
