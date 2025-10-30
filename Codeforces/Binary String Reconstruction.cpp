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
    int a, b, c; cin >> a >> b >> c;
    if (b != 0) {
      deque<char> dq;
      dq.push_back('0'); dq.push_back('1'); b--;
      for (int i = 0; i < c; i++) dq.push_back('1');
      for (int i = 0; i < a; i++) dq.push_front('0');
      for (int i = 0; i < b; i++) 
        if (dq.back() == '1') dq.push_back('0');
        else dq.push_back('1');
 
      for (char& c : dq) cout << c;
      cout << '\n';
    }
    else {
      if (a != 0) {
        vector<char> arr = {'0'};
        for (int i = 0; i < a; i++) arr.push_back('0');
        for (char& c : arr) cout << c;
        cout << '\n';
      }
      else {
        vector<char> arr = {'1'};
        for (int i = 0; i < c; i++) arr.push_back('1');
        for (char& c : arr) cout << c;
        cout << '\n';
      }
    }
  }
 
  return 0;
}
