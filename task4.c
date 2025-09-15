#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a = 50; // цена 75 газет
	int x = 30; // цена остальных газет
	int shop = 133; // колво газет
	int first = a * 75;
	int second = (shop - 75) * x;
	int total = first + second;
	printf("Заработок с первых 75 газет: %d\nЗаработок с оставшихся %d газет: %d\nИтоговый заработок: %d", first, shop-75, second, total);
}