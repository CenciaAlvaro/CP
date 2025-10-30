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
  int n; cin >> n;
  vi arr(n); 
  for (int& v : arr) cin >> v;
  vi arr_e, arr_o;
  for (int& v : arr)
    if (v & 1) arr_o.push_back(v);
    else arr_e.push_back(v);

  ll ans = -1;
  sort(arr_e.begin(), arr_e.end()); reverse(arr_e.begin(), arr_e.end());
  sort(arr_o.begin(), arr_o.end()); reverse(arr_o.begin(), arr_o.end());

  if (arr_e.size() >= 2) ans = max(ans, 0ll + arr_e[0] + arr_e[1]);
  if (arr_o.size() >= 2) ans = max(ans, 0ll + arr_o[0] + arr_o[1]);
  cout << ans;

  return 0;
}
