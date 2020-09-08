#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		//reverse(s.begin(), s.end());
		stack<char>ss;
		for (int i = 0; i < s.size(); i++) {
			ss.push(s[i]);
		}
		string res;
		while (!ss.empty()) {
			res += ss.top();
			ss.pop();
		}
		cout << s << endl;
	}

	//system("pause");
	return 0;
}