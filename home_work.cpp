#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, m, L, k;
	L = 373;
	n = 3;
	k = 3;
	m = 5;
	printf("Дано: ");
	printf("\n%9d\n10d", n, L);
	printf("\n   _______________\nОтвет:\n+11.2d%7.f\n", n * 1. / L);
}