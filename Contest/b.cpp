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
    bool a, b; a = b = false;
    for (int& v : arr) 
      if (v & 1) a = true;
      else b = true;

    if (a && b) 
      sort(arr.begin(), arr.end()); 

    for (int& v : arr) cout << v << ' ';
    cout << '\n';
  }

  return 0;
}
