#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() 
{
	setlocale(LC_ALL, "RUS");
	int first_digit, second_digit, side1, side2;
	printf("����� ����������!");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 2; i++) 
	{
		printf("��������.");
		Sleep(500);
		system("cls");
		printf("��������..");
		Sleep(500);
		system("cls");
		printf("��������...");
		Sleep(500);
		system("cls");
	}
choice:
	system("cls");
	printf("����� ������:\n");
	printf("1. �������������.\n2. �����������.\n3. ����.\n0. ����� �� ����������.\n");
	printf("����: ");
	scanf_s("%d", &first_digit);
	system("cls");
	if (first_digit == 1) 
	{
		printf("������� ��� ������� ��������������: ");
		scanf_s("%d %d", &side1, &side2);
	rectangle:
		system("cls");
		printf("����:\n");
		printf("1. ����� ������� ��������������.\n");
		printf("2. ����� �������� ��������������.\n");
		printf("3. ����� ��������� ��������������.\n");
		printf("4. ��������� � ������ ������.\n");
		printf("0. �����.\n");
		printf("����: ");
		scanf_s("%d", &second_digit);
		if (second_digit == 1) { printf("������� ��������������: %.2f\n", (side1 * side2) * 1.0); }
		if (second_digit == 2) { printf("�������� ��������������: %.2f\n", (side1 + side2) * 2.0); }
		if (second_digit == 3) { printf("��������� ��������������: %.2f\n", sqrt(pow(side1, 2) + pow(side2, 2))); }
		printf("��� ����������� ������� ����� ������� . . . ");
		scanf_s("%d", &first_digit);
		if (second_digit == 4) { goto choice; }
		if (second_digit == 0) { goto stop; }
		goto rectangle;
	
	}
	if (first_digit == 2) 
	{
		printf("������� ��� ������� �������������� ������������: ");
		scanf_s("%d %d", &side1, &side2);
	triangle:
		system("cls");
		printf("����:\n");
		printf("1. ����� ������� ������������.\n");
		printf("2. ����� �������� ������������.\n");
		printf("3. ����� ��������� ������������.\n");
		printf("4. ��������� � ������ ������.\n");
		printf("0. �����.\n");
		printf("����: ");
		scanf_s("%d", &second_digit);
		if (second_digit == 1) { printf("������� ������������: %.2f\n", (side1 * side2) / 2.0); }
		if (second_digit == 2) { printf("�������� ������������: %.2f\n", (sqrt(pow(side1, 2) + pow(side2, 2)) + side1 + side2) * 1.0); }
		if (second_digit == 3) { printf("���������� ������������: %.2f\n", (sqrt(pow(side1, 2) + pow(side2, 2))) * 1.0); }
		printf("��� ����������� ������� ����� ������� . . . ");
		scanf_s("%d", &first_digit);
		if (second_digit == 4) { goto choice; }
		if (second_digit == 0) { goto stop; }
		goto triangle;
	}
	if (first_digit == 3)
	{
		printf("������� ������ �����: ");
		scanf_s("%d", &side1);
	circle:
		system("cls");
		printf("����:\n");
		printf("1. ����� ������� �����.\n");
		printf("2. ����� ����� ���������� �����.\n");
		printf("3. ����� ������� �����.\n");
		printf("4. ��������� � ������ ������.\n");
		printf("0. �����.\n");
		printf("����: ");
		scanf_s("%d", &second_digit);
		if (second_digit == 1) { printf("������� �����.: %.2f\n", 3.14 * pow(side1, 2)); }
		if (second_digit == 2) { printf("����� ���������� �����: %.2f\n", 2 * 3.14 * side1); }
		if (second_digit == 3) { printf("������� �����: %.2f\n", side1 * 2.0); }
		printf("��� ����������� ������� ����� ������� . . . ");
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
	printf("��� ����������� ������� ����� ������� . . . ");
	scanf_s("%d", &second_digit);
		return 0;
}