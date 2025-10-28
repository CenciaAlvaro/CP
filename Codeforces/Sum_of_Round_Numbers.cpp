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
    string s = to_string(n);
    
    vector<string> ans;
    for (int i = 0; i < s.size(); i++) {
      char c = s[i];
      if (c == '0') continue;
      string str = "";
      str += c;
      for (int j = 0; j < (int)s.size() - i - 1; j++) 
        str += '0';
      ans.push_back(str);
    }

    cout << ans.size() << '\n';
    for (string& s : ans) cout << s << ' '; cout << '\n';
  }

  return 0;
}
