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
  int n, m; cin >> n >> m;
  vector<set<int>> arr(n + 1);
  for (int i = 0; i < m; i++) {
    int k; cin >> k;
    vi arrs;
    set<int> st;
    for (int j = 0; j < k; j++) {
      int v; cin >> v;
      arrs.push_back(v);
    }
    for (int j = 0; j < arrs.size(); j++) 
      for (int k = 0; k < arrs.size(); k++)
        arr[arrs[j]].insert(arrs[k]);
  }

  bool valid = true;
  for (int i = 1; i <= n; i++) 
    if (arr[i].size() != n) 
      valid = false;

  /*
  for (int i = 1; i <= n; i++) {
    cout << i << " = [";
    for (const int& v : arr[i])
      cout << v << ' ';
    cout << "]\n";
  }
  */


  cout << (valid ? "Yes" : "No");

  return 0;
}
