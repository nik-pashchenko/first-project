#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main4()
{
	setlocale(LC_ALL, "Russian");

	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);

	printf("Привет мир! Я Никита. Мне %d лет, а не %d ", a, b);

	return 0;
}