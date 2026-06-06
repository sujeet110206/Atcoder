#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int H, W;
  cin >> H >> W;
  if (H == 1 && W == 1) {
    cout << 0;
    return;
  }
  if (H == 1) {
    for (int j = 0; j < W; j++)  {
      if (j == 0 || j == W - 1)
        cout << "1" << " ";
      else
        cout << "2" << " ";
    }
    return;
  }
  if (W == 1)  {
    for (int i = 0; i < H; i++)  {
      if (i == 0 || i == H - 1)
        cout << "1" << " ";
      else
        cout << "2" << " ";
    }
    return;
  }
  auto is_corner = [&](int i, int j) {
    return (i == 0 && j == 0) || (i == 0 && j == W - 1) || (i == H - 1 && j == 0) || (i == H - 1 && j == W - 1);
  };
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (is_corner(i, j))
        cout << "2" << " ";
      else if (i == 0 || j == 0 || i == H - 1 || j == W - 1)
        cout << "3" << " ";
      else
        cout << "4" << " ";
    }
    cout << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
