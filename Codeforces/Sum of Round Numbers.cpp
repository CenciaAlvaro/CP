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
    string s; cin >> s;
    vector<string> ans;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') continue;
      string str = "";
      str.push_back(s[i]);
      for (int j = 0; j < s.size() - i - 1; j++)
        str.push_back('0');
      ans.push_back(str);
    }
    cout << ans.size() << '\n';
    for(string& s : ans) cout << s << ' '; cout << '\n';
  }
 
  return 0;
}
