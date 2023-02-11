#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	int count_digits, sum, digit;
	sum = 0;
	scanf_s("%d", &count_digits);
	for (int i = 0; i < count_digits; i++) {
		scanf_s("%d", &digit);
		sum += pow(digit, 2);
	}
	printf("%d", sum);
	return 0;
}