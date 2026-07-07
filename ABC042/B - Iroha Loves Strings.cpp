#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, l;
  cin >> n >> l;
  vector<string> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  for (string& s : a) cout << s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
