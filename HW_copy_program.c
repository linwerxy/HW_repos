#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() 
{
	setlocale(LC_ALL, "RUS");
	int first_digit, second_digit, side1, side2;
	printf("Добро пожаловать!");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 2; i++) 
	{
		printf("Загрузка.");
		Sleep(500);
		system("cls");
		printf("Загрузка..");
		Sleep(500);
		system("cls");
		printf("Загрузка...");
		Sleep(500);
		system("cls");
	}
choice:
	system("cls");
	printf("Выбор фигуры:\n");
	printf("1. Прямоугольник.\n2. Треугольник.\n3. Круг.\n0. Выйти из приложения.\n");
	printf("Ввод: ");
	scanf_s("%d", &first_digit);
	system("cls");
	if (first_digit == 1) 
	{
		printf("Введите две стороны прямоугольника: ");
		scanf_s("%d %d", &side1, &side2);
	rectangle:
		system("cls");
		printf("Меню:\n");
		printf("1. Найти площадь прямоугольника.\n");
		printf("2. Найти периметр прямоугольника.\n");
		printf("3. Найти диагональ прямоугольника.\n");
		printf("4. Вернуться к выбору фигуры.\n");
		printf("0. Выйти.\n");
		printf("Ввод: ");
		scanf_s("%d", &second_digit);
		if (second_digit == 1) { printf("Площадь прямоугольника: %.2f\n", (side1 * side2) * 1.0); }
		if (second_digit == 2) { printf("Периметр прямоугольника: %.2f\n", (side1 + side2) * 2.0); }
		if (second_digit == 3) { printf("Диагональ прямоугольника: %.2f\n", sqrt(pow(side1, 2) + pow(side2, 2))); }
		printf("Для продолжения нажмите любую клавишу . . . ");
		scanf_s("%d", &first_digit);
		if (second_digit == 4) { goto choice; }
		if (second_digit == 0) { goto stop; }
		goto rectangle;
	
	}
	if (first_digit == 2) 
	{
		printf("Введите две стороны прямоугольного треугольника: ");
		scanf_s("%d %d", &side1, &side2);
	triangle:
		system("cls");
		printf("Меню:\n");
		printf("1. Найти площадь треугольника.\n");
		printf("2. Найти периметр треугольника.\n");
		printf("3. Найти диагональ треугольника.\n");
		printf("4. Вернуться к выбору фигуры.\n");
		printf("0. Выйти.\n");
		printf("Ввод: ");
		scanf_s("%d", &second_digit);
		if (second_digit == 1) { printf("Площадь треугольника: %.2f\n", (side1 * side2) / 2.0); }
		if (second_digit == 2) { printf("Периметр треугольника: %.2f\n", (sqrt(pow(side1, 2) + pow(side2, 2)) + side1 + side2) * 1.0); }
		if (second_digit == 3) { printf("Гипотенуза треугольника: %.2f\n", (sqrt(pow(side1, 2) + pow(side2, 2))) * 1.0); }
		printf("Для продолжения нажмите любую клавишу . . . ");
		scanf_s("%d", &first_digit);
		if (second_digit == 4) { goto choice; }
		if (second_digit == 0) { goto stop; }
		goto triangle;
	}
	if (first_digit == 3)
	{
		printf("Введите радиус круга: ");
		scanf_s("%d", &side1);
	circle:
		system("cls");
		printf("Меню:\n");
		printf("1. Найти площадь круга.\n");
		printf("2. Найти длину окружности круга.\n");
		printf("3. Найти диаметр круга.\n");
		printf("4. Вернуться к выбору фигуры.\n");
		printf("0. Выйти.\n");
		printf("Ввод: ");
		scanf_s("%d", &second_digit);
		if (second_digit == 1) { printf("Площадь круга.: %.2f\n", 3.14 * pow(side1, 2)); }
		if (second_digit == 2) { printf("Длина окружности круга: %.2f\n", 2 * 3.14 * side1); }
		if (second_digit == 3) { printf("Диаметр круга: %.2f\n", side1 * 2.0); }
		printf("Для продолжения нажмите любую клавишу . . . ");
		scanf_s("%d", &first_digit);
		if (second_digit == 4) { goto choice; }
		if (second_digit == 0) { goto stop; }
		goto circle;
	}
	if (first_digit == 4) 
	{
		goto stop;
	}
stop: 
	system("cls");
	printf("Для продолжения нажмите любую клавишу . . . ");
	scanf_s("%d", &second_digit);
		return 0;
}