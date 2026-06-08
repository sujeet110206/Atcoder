#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
	int X;
	cin >> X;
	string s = "HelloWorld";
	for (int i = 0; i < s.length(); i++) {
		if (X - 1 == i) continue;
		cout << s[i];
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();

	return 0;
}
