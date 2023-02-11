#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) 
{
	setlocale(LC_ALL, "RUSSIAN");

	char letter1, letter2;
	int x1, x2, y1, y2, figure;

	printf("Старт: ");
	letter1 = getchar();
	printf("Финиш: ");
	scanf_s("%d\n", &y1);
	letter2 = getchar();
	printf("Выберете фигуру (1 - король, 2 - ферзь, 3 - ладья, 4 - слон, 5 - конь): ");
	scanf_s("%d\n", &y2);
	scanf_s("%d", &figure);

	switch (letter1)
	{
	case 'a': { x1 = 1; break; }
	case 'b': { x1 = 2; break; }
	case 'c': { x1 = 3; break; }
	case 'd': { x1 = 4; break; }
	case 'e': { x1 = 5; break; }
	case 'f': { x1 = 6; break; }
	case 'g': { x1 = 7; break; }
	case 'h': { x1 = 8; break; }
	default: { printf("Ошибка ввода"); return 1; }
	}

	switch (letter2)
	{
	case 'a': { x2 = 1; break; }
	case 'b': { x2 = 2; break; }
	case 'c': { x2 = 3; break; }
	case 'd': { x2 = 4; break; }
	case 'e': { x2 = 5; break; }
	case 'f': { x2 = 6; break; }
	case 'g': { x2 = 7; break; }
	case 'h': { x2 = 8; break; }
	default: { printf("Ошибка ввода"); return 1; }
	}

	switch (figure)
	{
	case 1: if ((abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) && (x1 != x2 || y1 != y2)) { printf("Корректный ход \n"); break; }
		  else { printf("Некорректный ход \n"); break; }
	case 2: if ((abs(x1 - x2) == abs(y1 - y2) && (abs(x1 - x2) != 0)) || ((x1 == x2) != (y1 == y2))) { printf("Корректный ход \n"); break; }
		  else { printf("Некорректный ход \n"); break; }
	case 3: if ((x1 == x2) != (y1 == y2)) { printf("Корректный ход \n"); break; }
		  else { printf("Некорректный ход \n"); break; }
	case 4: if ((abs(x1 - x2) == abs(y1 - y2)) && (abs(x1 - x2) != 0)) { printf("Корректный ход \n"); break; }
		  else { printf("Некорректный ход \n"); break; }
	case 5: if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) { printf("Корректный ход \n"); break; }
		  else { printf("Некорректный ход \n"); break; }
	default: { printf("Ошибка ввода"); return 1; }
	} 

	return 0;
}
