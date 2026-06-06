#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  string S;
  cin >> S;
  int N;
  cin >> N;
  for (int i = N; i < S.length() - N; i++)
    cout << S[i];
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
