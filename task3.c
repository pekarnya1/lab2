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
	printf("Дано:\n%15d\n%15d\n%20s\nОтвет:\n%10c %+0*.*f", n, L, "---------", "", k + m + 2, m, (float)n / L);
}
