#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
	int a, V, S_full, S_side;

	setlocale(LC_ALL, "russian");

	printf("����: ");
	scanf_s("%d", &a);

	V = pow(a, 3);
	S_full = 6 * pow(a, 2);
	S_side = 4 * pow(a, 2);

	printf("���������:\n");
	printf("����� = %d \n", V);
	printf("������� ������ ����������� = %d \n", S_full);
	printf("������� ������� ����������� = %d \n", S_side);

	return 0;
}