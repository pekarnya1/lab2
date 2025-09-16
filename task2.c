#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int N = 12; // часы
	int K = 21; // минуты
	printf("Сейчас %d часов %d минут\n", N, K);
	printf("Идет %d минута суток\n", K+N*60);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);
	printf("Текущий час  = %.2f суток  и текущая минута = %.2f часа", (float)N/24, (float)K / 60);
}
