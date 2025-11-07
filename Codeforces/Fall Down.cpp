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
 
vector<vector<char>> mat;
 
void f(int y, int x) {
  while (++y < mat.size()) {
    char c = mat[y][x];
    if (c == '*' || c == 'o') break;
    mat[y - 1][x] = '.';
    mat[y][x] = '*';
  }
}
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    mat.assign(n, vector<char>(m));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> mat[i][j];
 
    for (int i = n - 1; i >= 0; i--)
      for (int j = 0; j < m; j++) 
        if (mat[i][j] == '*') 
          f(i, j);
 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) 
        cout << mat[i][j];
      cout << '\n';
    }
  }
  return 0;
}
