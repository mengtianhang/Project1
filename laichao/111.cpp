#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char>sSta;
	char tmp;
	while (tmp = getchar()) {
		sSta.push(tmp);
	}
	string res;
	while (!sSta.empty()) {
		res += sSta.top;
		sSta.pop(); 
	}
	cout << res << endl;

	//system("pause");
	return 0;
}