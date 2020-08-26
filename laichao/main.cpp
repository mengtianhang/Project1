#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<int>allNumbers;
	if (a == b == c == d == 1) {
		cout << -1 << endl;
	}
	allNumbers.push_back(a);
	allNumbers.push_back(b);
	allNumbers.push_back(c);
	allNumbers.push_back(d);

	vector<int>dp(4, 0);
	bool flag = true;
	while (flag) {
		for (int i = 0; i < 4; i++) {
			sort(allNumbers.begin(), allNumbers.end());
			while (allNumbers[3] > allNumbers[2] && allNumbers[0] <= allNumbers[1]) {
				allNumbers.back() -= 2;
				allNumbers[0] += 1;
			}
			bool flag = true;
			int com = allNumbers[0];
			for (int i = 1; i < 4; i++) {
				if (com != allNumbers[i]) {
					flag = false;
				}
			}
			if (flag) {
				cout << accumulate(allNumbers.begin(), allNumbers.end(), 0) << endl;
				system("pause");
				return 0;
			}
		}
		bool tmp = true;
		for (int i = 0; i < allNumbers.size(); i++) {
			if (allNumbers[i] > 1) {
				tmp = false;
				break;
			}
		}
		flag = tmp;
	}
	cout << -1 << endl;
	system("pause");
	return 0;
}