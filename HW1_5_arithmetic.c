#include <stdio.h>
#include <math.h>

int main() {

	int a, b;

	scanf_s("%d %d", &a, &b);

	printf("%d \n", a + b); // �����
	printf("%d \n", a - b); // ��������
	printf("%d \n", a * b); // ������������
	printf("%.2f \n", (float)a / b); // �������
	printf("%.2f \n", (float)(pow(a, 2) + pow(b, 2)) / 2); // ������� �������������� ���������
	printf("%.2f \n", (float)(abs(a) + abs(b)) / 2); // ������� �������������� �������
	printf("%d \n", a % b); // ������� �� �������

	return 0;

}