#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	int a, n;
	vector<int>vec01;
	vector<int>vec02;
	cin >> n;
	while (n)
	{
		cin >> a;
		vec01.push_back(a);
		vec02.push_back(a);
		n--;
	}
	sort(vec02.begin(), vec02.end());
	int len = vec01.size(), count = 0, j = len - 1;
	for (int i = len - 1; i >= 0; i--)
	{
		if (vec02[j] == vec01[i])
		{
			j--;
			count++;
		}
	}
	int res = len - count;
	cout << res << endl;
	return 0;
}
