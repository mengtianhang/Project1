#include "stdio.h"

void DecToN(long num, int B) {
	int a[100] = { 0 };
	int count = 0;
	while (num > 0) {
		a[count++] = num%B;  //��������  
		num = num / B;
	}
	for (int i = count - 1; i >= 0; i--){
		if (a[i] >= 10)//ʮ������Ҫ���⴦��  
		{
			printf("%c", 'A' + a[i] - 10);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

int main(int argc, char* argv[])
{
	long num;
	int B;
	//cin >> B >> num;
	sscanf("%d,%d", &B, &num);
	DecToN(num, B);

	return 0;
}