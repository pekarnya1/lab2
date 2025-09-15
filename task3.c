#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n = 3; 
	int L = 333; 
	int k = 3;
	int m = 3;
	printf("Дано:\n 	     %d\n	   %d\n	   -------\nОтвет:	   %0*.*f", n, L, k + m + 1, m, (float)n / L);
}