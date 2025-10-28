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

int n, k;

vector<int> f1() {
  vi arr;
  int val = n;
  for (int i = 0; i < k - 1; i++) {
    arr.push_back(2);
    val -= 2;
  }
  arr.push_back(val);

  bool valid = true;
  for (int& v : arr) 
    if ((v & 1) || v <= 0) 
      valid = false;

  return (valid) ? arr : vector<int>();
}

vector<int> f2() {
  vi arr;
  int val = n;
  for (int i = 0; i < k - 1; i++) {
    arr.push_back(1);
    val -= 1;
  }
  arr.push_back(val);

  bool valid = true;
  for (int& v : arr) 
    if (!(v & 1) || v <= 0) 
      valid = false;

  return (valid) ? arr : vector<int>();
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    cin >> n >> k;
    vi arr1 = f1();
    vi arr2 = f2();
    if (!arr1.empty()) {
      cout << "YES\n";
      for (int& v : arr1) cout << v << ' '; cout << '\n';
    }
    else if (!arr2.empty()) {
      cout << "YES\n"; 
      for (int& v : arr2) cout << v << ' '; cout << '\n';
    }
    else { cout << "NO\n"; }
  }

  return 0;
}
