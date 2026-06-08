#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

string CharToInt = "22233344455566677778889999";
void solve() {
  int N;
  cin >> N;
  string ans = "";
  while (N--) {
    string s;
    cin >> s;
    ans += CharToInt[s[0] - 'a'];
  }
  cout << ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
