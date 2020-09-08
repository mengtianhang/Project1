#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		reverse(s.begin(), s.end());
		cout << s << endl;
	}

	//system("pause");
	return 0;
}