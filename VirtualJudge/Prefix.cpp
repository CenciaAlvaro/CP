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
  string s, t; cin >> s >> t;
  if (s.size() > t.size()) { cout << "No"; exit(0); }
  bool valid = true;
  for (int i = 0; i < s.size(); i++) 
    if (s[i] != t[i]) 
      valid = false;
  cout << (valid ? "Yes" : "No");
  return 0;
}
