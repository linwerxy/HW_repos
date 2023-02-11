#include <stdio.h>
#include <math.h>

int main() {

	int a, b;

	scanf_s("%d %d", &a, &b);

	printf("%d \n", a + b); // сумма
	printf("%d \n", a - b); // разность
	printf("%d \n", a * b); // произведение
	printf("%.2f \n", (float)a / b); // частное
	printf("%.2f \n", (float)(pow(a, 2) + pow(b, 2)) / 2); // среднее арифметическое квадратов
	printf("%.2f \n", (float)(abs(a) + abs(b)) / 2); // среднее арифметическое модулей
	printf("%d \n", a % b); // остаток от деления

	return 0;

}