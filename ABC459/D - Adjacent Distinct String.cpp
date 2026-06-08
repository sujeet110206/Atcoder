#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.length();
    map<int, int> mpp;
    for (auto &ch : s) mpp[ch - 'a']++;
    vector<pair<int, int>> v;
    for (auto& it : mpp) {
      int val = it.first;
      int freq = it.second;
      v.push_back({freq, val});
    }
    sort(v.rbegin(), v.rend());
    if (v.front().first > (n + 1) / 2) {
      cout << "No\n";
      continue;
    }
    string ans(n, '0');
    int ind = 0;
    for (auto& it : v) {
      int freq = it.first;
      int ch = it.second;
      for (int i = 0; i < freq; i++) {
        if (ans[ind] == '0') {
          ans[ind] = char('a' + ch);
          ind += 2;
        }
        if (ind >= n) ind = 1;
      }
    }
    bool found = true;
    for (int i = 0; i < n - 1; i++) {
      if (ans[i] == ans[i + 1]) {
        found = false;
        break;
      }
    }
    if (found) {
      cout << "Yes\n" << ans << "\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}
