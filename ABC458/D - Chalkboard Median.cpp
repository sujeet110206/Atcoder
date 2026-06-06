#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int x;
  cin >> x;
  int q;
  cin >> q;
  priority_queue<int> maxpq;
  priority_queue<int, vector<int>, greater<int>> minpq;
  maxpq.push(x);
  while (q--) {
    int a, b;
    cin >> a >> b;
    int cur = maxpq.top();
    if (a <= cur)
      maxpq.push(a);
    else
      minpq.push(a);
    if (b <= cur)
      maxpq.push(b);
    else
      minpq.push(b);
    while (maxpq.size() > minpq.size() + 1) {
      minpq.push(maxpq.top());
      maxpq.pop();
    }
    while (maxpq.size() <= minpq.size()) {
      maxpq.push(minpq.top());
      minpq.pop();
    }
    cout << maxpq.top() << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
