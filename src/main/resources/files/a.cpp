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

string s;

int main() {
#ifdef LOCAL
  freopen("a.txt", "r", stdin);
// freopen("main.txt", "w", stdout);
#else
  ios::sync_with_stdio(0);
  cin.tie(0);
#define endl '\n'
#define dbg(...) 18
#endif
  bool cnd1, cnd2;
  int t, c1, c2;
  cin >> t;
  while (t--) {
    cin >> s;
    cnd1 = cnd2 = true;
    c1 = c2 = 0;
    for (char c : s) {
      if (c == s[0])
        c1++, c2++;
      else if (c == s[SZ(s) - 1])
        c1--, c2--;
      else
        c1++, c2--;
      if (c1 < 0) cnd1 = false;
      if (c2 < 0) cnd2 = false;
    }
    cnd1 &= c1 == 0;
    cnd2 &= c2 == 0;
    if (cnd1 || cnd2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}

/*
g++ -pthread -Wall -Wshadow -std=c++17 -o main main.cpp -DLOCAL && ./main
*/