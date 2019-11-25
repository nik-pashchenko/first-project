#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);

	printf("Привет мир!  %d %d %d ", c, b, a);

	return 0;
}