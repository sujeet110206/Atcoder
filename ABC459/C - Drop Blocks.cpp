#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n, 0);
  unordered_set<int> seen;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      a[x - 1]++;
      seen.insert(x);
      if (seen.size() == n) {
        for (int i = 0; i < n; i++) {
          a[i]--;
        }
      }
    } else {
      int y;
      cin >> y;
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        if (y <= a[i]) cnt++;
      }
      cout << cnt << "\n";
    }
  }
  return 0;
}
