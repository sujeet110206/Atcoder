#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
	string S;
	cin >> S;
	ll n = S.length();
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		if (S[i] == 'C') {
			int leftLen = i + 1;
			int rightLen = n - i;
			ans += min(leftLen, rightLen);
		}
	}
	cout << ans;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
