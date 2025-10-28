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
const int N = 2e5+5;

const int MAXN = 10000005;  // Ajusta según límites
vector<int> spf(MAXN, 0);   // Smallest Prime Factor
vector<bool> is_prime(MAXN, true);
vector<int> primes;
vector<ll> phi(MAXN, 0);

// Criba extendida para SPF, primes y Phi
void sieve() {
    for (int i = 1; i < MAXN; i++) spf[i] = i, phi[i] = i;
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i < MAXN; i++) {
        if (spf[i] == i) {  // i es prime
            primes.push_back(i);
            is_prime[i] = true;
            phi[i] = i - 1;
        }
        for (int p : primes) {
            if (p > spf[i] || i * p >= MAXN) break;
            spf[i * p] = p;
            phi[i * p] = phi[i * p] / p * (p - 1);  // Fórmula multiplicativa
        }
    }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  sieve();
  int t; cin >> t; 
  while (t--) {
    int n; cin >> n;
    vll arr(n); 
    for (ll& v : arr) cin >> v;
    __int128 val = 1;
    int ans = INF;
    for (ll& v : arr) {
      for (int i = 0; i < primes.size(); i++) {
        if (v % primes[i] != 0) { ans = min(primes[i], ans); break; }
        if (val * primes[i] > 1e18) break;
        val *= primes[i];
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
