//#include "stdio.h"
#include <iostream>
using namespace std;

void DecToN(long num, int B) {
	int a[100] = { 0 };
	int count = 0;
	while (num > 0) {
		a[count++] = num%B;  //保存余数  
		num = num / B;
	}
	for (int i = count - 1; i >= 0; i--) {
		if (a[i] >= 10)//十六进制要特殊处理  
		{
			//printf("%c", 'A' + a[i] - 10);
			char c = 'A' + a[i] - 10;
			cout << c;
		}
		else
		{
			//printf("%d", a[i]);
			cout << a[i] << endl;
		}
	}
	//printf("\n");
	cout << endl;
}

int main(int argc, char* argv[])
{
	long num;
	int B;
	cin >> B >> num;
	//sscanf("%d,%d", &B, &num);
	DecToN(num, B);

	return 0;
}