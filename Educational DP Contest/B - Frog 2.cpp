#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; i++) cin >> h[i];
  vector<int> dp(n + 1, 0);
  for (int i = 1; i < n; i++) {
    int min_step = INT_MAX;
    for (int j = 1; j <= k; j++) {
      if (i - j >= 0) {
        int jump = dp[i - j] + abs(h[i] - h[i - j]);
        min_step = min(min_step, jump);
      }  
    }
    dp[i] = min_step;
  }
  cout << dp[n - 1] << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
