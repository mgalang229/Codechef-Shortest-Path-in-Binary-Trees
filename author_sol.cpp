#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int qq = 0; qq < n; qq++) {
		int i, j;
		cin >> i >> j;
		// view the image in this repository for better understanding
		int cnt = 0;
		// run a loop until 'i' is equal to 'j' (which means that they
		// are already in the place of their Lowest Common Ancestor (LCA))
		while (i != j) {
			if (i < j) {
				// if 'i' is less than 'j', then divide 'j' by 2 (go back to its parent)
				j /= 2;
			} else {
				// otherwise, divide 'i' by 2 (go back to its parent)
				i /= 2;
			}
			// everytime a node goes back to its parent, increment 'cnt' (distance)
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
