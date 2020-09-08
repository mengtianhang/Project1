#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	string str;
	while (cin >> str) {
		stack<char>sSta;
		for (int i = 0; i < str.size(); i++) {
			sSta.push(str[i]);
		}
		string res;
		while (!sSta.empty()) {
			res += sSta.top();
			sSta.pop();
		}
		cout << res << endl;
	}
	return 0;
}