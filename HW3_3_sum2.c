#include <stdio.h>
#include <locale.h>

int main() 
{
	int sum = 0, num = -1;
	while (num != 0) 
	{
		scanf_s("%d", &num);
		if (num > 0) 
		{
			sum += num;
		}
		else 
		{
			continue;
		}
	}
	printf("%d", sum);
}