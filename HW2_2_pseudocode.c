#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	int x, y, z;
	setlocale(LC_ALL, "RUSSIAN");

	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	if (x != y && y != z && x != z) 
	{
		if (x > y && x > z) 
		{
			z += x;
		}
		else if (y > x && y > z) 
		{
			z += y;
		}
		else 
		{
			z = pow(z, 2); 
		}
		printf("%d", z);
	}
	else if (x == y && y == z) 
	{
		printf("Все переменные равны");
	}
	else if (x == y) 
	{
		printf("x = y");
	}
	else if (x == z) 
	{
		printf("x = z");
	}
	else if (y == z) 
	{
		printf("y = z");
	}
	return 0;
} 