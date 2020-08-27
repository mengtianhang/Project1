#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sum = 0;
	string str01, str02;
	cin >> str01;
	cin >> str02;
	if (str01.length() > 2000 || str02.length() > 2000)
	{
		cout << "error" << endl;
	}
	for (int i = 0; i < str01.length(); i++)
	{
		char c1 = str01[i], c2 = str02[i];
		if (c1 == c2) {
			sum += 20;
		}
		else {
			if (sum >= 10) {
				sum -= 10;
			}
		}
	}
	cout << sum << endl;
	return 0;
}