#include<stdio.h>
#include<iostream>
#include<istream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//void main11()
//{
//	int Num = 0;
//	cin >> Num;
//	vector<string> names;
//	for (size_t i = 0; i < Num; i++)
//	{
//		string name;
//		cin >> name;
//		names.push_back(name);
//	}
//	for (size_t i = 0; i < names.size(); i++)
//	{
//		if (names[i][0] >= 'a'&&names[i][0] <= 'z' || names[i][0] >= 'A'&&names[i][0] <= 'Z')
//		{
//			if (((names[i]) >= "a" && (names[i]) <= "z" && (names[i]) >= "A" && (names[i]) <= "Z") && ((names[i]) >= "0" && (names[i]) <= "9"))
//			{
//				cout << "Accept" << endl;
//			}
//			else {
//				cout << "Wrong" << endl;
//			}
//		}
//		else
//		{
//			cout << "Wrong" << endl;
//		}
//		
//	}
//	system("pause");
//}
//void main1() 
//{
//	int n = 0;
//	int m = 0;
//	cin >> n>>m;
//	vector<int> vs;
//	vector<int> ws;
//	vector<int> sum;
//	for (size_t i = 0; i < n; i++)
//	{
//		int v = 0;
//		int w = 0;
//		cin >> v >>w;
//		vs.push_back(v);
//		ws.push_back(w);
//	}
//	for (size_t i = 0; i < vs.size(); i++)
//	{
//		int s = vs[i] + 2 * ws[i];
//		sum.push_back(s);
//	}
//	for (size_t i = 0; i < m; i++)
//	{
//		int maxPosition = max_element(sum.begin(), sum.end()) - sum.begin();
//		if (i=m-1)
//		{
//			cout << maxPosition + 1 << " ";
//		}
//		cout << maxPosition +1<< " ";
//		sum[maxPosition] = -1;
//	}
//	system("pause");
//}
//class A
//{
//public:
//	int i;
//	static int count;
//	A(int n = 0) :i(n) { count++; }
//	void show() {
//		cout << count << "_" << i << endl;
//	}
//
//};
//int A::count = 0;
//void main()
//{
//
//	A o1(5);
//	A *p = &o1;
//	void (A::*q3)() = &A::show;
//	(p->*q3)();
//
//	system("pause");
//}
class point
{
	int x, y;
public:
	point(int a = 0, int b = 0) { x = a; y = b; };
	point(point &p) { x = p.x; y = p.y; cout << "*"; };
	~point() { cout << "#"; }
	void show() { cout << x << y << endl; }

};

point f(point A) 
{
	return A;
}
int main() 
{
	point A(1, 2);
	point B;
	B = f(A);
	B.show();
	system("pause");

	return 0;
}



int a[4];
int sum = 0, averInt;
for (int i = 0; i < 4; i++)
{
	cin >> a[i];
	sum += a[i];
}
averInt = sum / 4;
int _sumSmall = 0, smallCount = 0;
int _sumBig = 0, bigCount = 0;
for (int i = 0; i < 4; i++)
{
	if (a[i] < averInt)
	{
		smallCount++;
		_sumSmall += a[i];
	}
	if (a[i] > averInt)
	{
		bigCount++;
		_sumBig += a[i];
	}
}

int result;
if ((_sumBig + _sumSmall * 2) % ((smallCount * 2 + bigCount)) == 0)
{
	result = (_sumBig + _sumSmall * 2) / ((smallCount * 2 + bigCount));
	cout << result * 4 << endl;
}
else
{
	cout << -1 << endl;
}