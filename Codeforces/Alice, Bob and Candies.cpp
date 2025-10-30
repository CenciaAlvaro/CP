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
    int l = 0, r = arr.size() - 1;
    vi arr_a = {0}, arr_b = {0};
    bool alice = true;
    int moves = 1;
    while (l <= r) {
 
      if (alice) {
        arr_a.back() += arr[l++];
        if (arr_a.back() > arr_b.back()) {
          arr_b.push_back(0);
          moves++;
          alice = false;
          if (l > r) moves--;
          continue;
        }
      }
 
      if (!alice) {
        arr_b.back() += arr[r--];
        if (arr_b.back() > arr_a.back()) {
          arr_a.push_back(0);
          moves++;
          alice = true;
          if (l > r) moves--;
          continue;
        }
      }
 
    }
 
    ll sum_a = 0, sum_b = 0;
    for (int& v : arr_a) sum_a += v;
    for (int& v : arr_b) sum_b += v;
 
    cout << moves << ' ' << sum_a << ' ' << sum_b << '\n';
  }
 
  return 0;
}
