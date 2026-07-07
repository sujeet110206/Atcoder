#include<bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int cnt5 = 0;
  int cnt7 = 0;
  for (int x : {a, b, c}) {
    if (x == 5) cnt5++;
    if (x == 7) cnt7++;
  }
  if (cnt5 == 2 && cnt7 == 1) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
