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
    int n, k; cin >> n >> k;
    k--;
    ll a = n - (k);
    ll b = n - (k * 2);
    if ((a & 1) && a > 0) { 
      cout << "YES\n";
      for (int i = 0; i < k; i++)
        cout << '1' << ' ';
      cout << a << '\n';
    }
    else if (!(b & 1) && b > 0) {
      cout << "YES\n";
      for (int i = 0; i < k; i++)
        cout << '2' << ' ';
      cout << b << '\n';
    }
    else { cout << "NO\n"; }
  }
  return 0;
}
