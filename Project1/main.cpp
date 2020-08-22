#include<stdio.h>
#include<iostream>
#include<istream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void main11()
{
	int Num = 0;
	cin >> Num;
	vector<string> names;
	for (size_t i = 0; i < Num; i++)
	{
		string name;
		cin >> name;
		names.push_back(name);
	}
	for (size_t i = 0; i < names.size(); i++)
	{
		if (names[i][0] >= 'a'&&names[i][0] <= 'z' || names[i][0] >= 'A'&&names[i][0] <= 'Z')
		{
			if (((names[i]) >= "a" && (names[i]) <= "z" && (names[i]) >= "A" && (names[i]) <= "Z") && ((names[i]) >= "0" && (names[i]) <= "9"))
			{
				cout << "Accept" << endl;
			}
			else {
				cout << "Wrong" << endl;
			}
		}
		else
		{
			cout << "Wrong" << endl;
		}
		
	}
	system("pause");
}
void main() 
{
	int n = 0;
	int m = 0;
	cin >> n>>m;
	vector<int> vs;
	vector<int> ws;
	vector<int> sum;
	for (size_t i = 0; i < n; i++)
	{
		int v = 0;
		int w = 0;
		cin >> v >>w;
		vs.push_back(v);
		ws.push_back(w);
	}
	for (size_t i = 0; i < vs.size(); i++)
	{
		int s = vs[i] + 2 * ws[i];
		sum.push_back(s);
	}
	for (size_t i = 0; i < m; i++)
	{
		int maxPosition = max_element(sum.begin(), sum.end()) - sum.begin();
		if (i=m-1)
		{
			cout << maxPosition + 1 << " ";
		}
		cout << maxPosition +1<< " ";
		sum[maxPosition] = -1;
	}
	system("pause1234");
}