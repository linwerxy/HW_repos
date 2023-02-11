#include <stdio.h>
#include <locale.h>
int main() 
{
	int ex1, ex2, ex3;
	setlocale(LC_ALL, "RUSSIAN");
	printf("Введите ваши оценки: ");
	scanf_s("%d %d %d", &ex1, &ex2, &ex3);
	if (ex1 == 5 && ex2 == 5 && ex3 == 5) {
		printf("Результат: вы отличник \n");
	}
	else if (ex1 == 2 || ex2 == 2 || ex3 == 2 ||
		ex1 == -1 || ex2 == -1 || ex3 == -1) {
		printf("Результат: вы не сдали :( \n");
	}
	else if (ex1 == 3 || ex2 == 3 || ex3 == 3) {
		printf("Результат: вы троечник \n");
	}
	else {
		printf("Результат: вы хорошист \n");
	}
	return 0;
}