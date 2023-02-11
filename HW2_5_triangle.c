#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
	int side1, side2, side3, flag = 0;
	setlocale(LC_ALL, "RUSSIAN");
	printf("Введите стороны треугольника\n");
	scanf_s("%d %d %d", &side1, &side2, &side3);
	if ((side1 + side2 < side3) || (side2 + side3 < side1) || (side1 + side3 < side2)) { printf("Не треугольник\n"); return 0; }
	if (side1 == side2 && side2 == side3) { printf("Равносторонний\n"); flag = 1; }
	if (side1 == side2 || side2 == side3 || side1 == side3) { printf("Равнобедренный\n"); flag = 1; }
	if ((pow(side1, 2) + pow(side2, 2) == pow(side3, 2)) || (pow(side1, 2) + pow(side3, 2) == pow(side2, 2)) || (pow(side2, 2) + pow(side3, 2) == pow(side1, 2))) 
	{
		printf("Прямоугольный\n");
		flag = 1;
	}
	if (flag == 0) { printf("Произвольный\n"); }
	return 0;
}