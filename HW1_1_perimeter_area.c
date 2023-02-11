#include <stdio.h>
#include <math.h>

int main() {
	int x1, x2, x3, y1, y2, y3, P, S, p, a, b, c;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &x3);
	scanf_s("%d", &y3);

	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	P = a + b + c;
	p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("P = %d ", P);
	system("PAUSE");
	printf("S = %d", S);

	return 0;
}
	
