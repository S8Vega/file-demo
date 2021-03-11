#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
#define forn(i, a, b) for (int i = a; i < b; ++i)
#define SZ(x) int(x.size())
#define pb push_back
#define F first
#define S second
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}

int n, U, R, D, L;

bool f() {
  for (int a = 0; a <= 1; ++a) {
    for (int b = 0; b <= 1; ++b) {
      for (int c = 0; c <= 1; ++c) {
        for (int d = 0; d <= 1; ++d) {
          if (a + b > U || b + c > R || c + d > D || d + a > L) {
            continue;
          }
          if (U - a - b > n - 2 || R - b - c > n - 2 || D - c - d > n - 2 ||
              L - d - a > n - 2) {
            continue;
          }

          return true;
        }
      }
    }
  }
  return false;
}

int main() {
#ifdef LOCAL
  freopen("b.txt", "r", stdin);
// freopen("main.txt", "w", stdout);
#else
  ios::sync_with_stdio(0);
  cin.tie(0);
#define endl '\n'
#define dbg(...) 18
#endif
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> U >> R >> D >> L;
    if (f())
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}

/*
g++ -pthread -Wall -Wshadow -std=c++17 -o main main.cpp -DLOCAL && ./main
*/