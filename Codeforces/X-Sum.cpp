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
 
int n, m;
vector<vector<int>> mat;
 
ll func(int y, int x) {
  ll sum = 0;
  for (int r = y, c = x; r >= 0 && c >= 0; r--, c--)
    sum += mat[r][c];
  for (int r = y, c = x; r < n && c < m; r++, c++) 
    sum += mat[r][c];
  for (int r = y, c = x; r < n && c >= 0; r++, c--)
    sum += mat[r][c];
  for (int r = y, c = x; r >= 0 && c < m; r--, c++)
    sum += mat[r][c];
  return sum - 3 * mat[y][x];
}
 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    cin >> n >> m;
    mat.assign(n, vector<int>(m));
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < m; j++)
        cin >> mat[i][j];
 
    ll mx = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        mx = max(mx, func(i, j));
 
    cout << mx << '\n';
  }
  return 0;
}

