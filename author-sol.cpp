#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s1;
		cin >> s1;
		string s2;
		cin >> s2;
		// as long as there is at least one safe cell in each column, 
		// it is possible to reach any column of the matrix
		bool bad = false;
		for (int i = 0; i < n; i++) {
			bad |= (s1[i] == '1' && s2[i] == '1');
		}
		cout << (!bad ? "YES" : "NO") << '\n';
	}
	return 0;
}
