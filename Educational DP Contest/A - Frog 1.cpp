#include<bits/stdc++.h>
using namespace std;

vector<long long> height;

void solve() {
  int n;
  cin >> n;
  height.resize(n);
  for (int i = 0; i < n; i++) cin >> height[i];
  int prev1 = 0;
  int prev2 = 0;
  for (int i = 1; i < n; i++) {
    int jumpOne = abs(height[i] - height[i - 1]) + prev1;
    int jumpTwo = INT_MAX;
    if (i - 2 >= 0)
      jumpTwo = abs(height[i] - height[i - 2]) + prev2;
    int cur = min(jumpOne, jumpTwo);
    prev2 = prev1;
    prev1 = cur;
  }
  cout << prev1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
