#include<bits/stdc++.h>
using namespace std;

set<int> st;

bool check(int x) {
  while (x > 0) {
    int r = x % 10;
    if (st.count(r)) return false;
    x /= 10;
  }
  return true;
}

void solve() {
  int n, k;
  cin >> n >> k;
  st.clear();
  for (int i = 0; i < k; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }
  while (true) {
    if (check(n)) {
      cout << n;
      return;
    }
    n++;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
