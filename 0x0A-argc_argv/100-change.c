#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the min number of coins to make change for an amouta money.
 * @argc: arguments count.
 * @argv: arguments vector(amount of  money).
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int money, cents = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);
		while (money >= 25)
		{
			money -= 25;
			cents += 1;
		}
		while (money >= 10)
		{
			money -= 10;
			cents += 1;
		}
		while (money >= 5)
		{
			money -= 5;
			cents += 1;
		}
		while (money >= 2)
		{
			money -= 2;
			cents += 1;
		}
		while (money >= 1)
		{
			money -= 1;
			cents += 1;
		}
		printf("%d\n", cents);
		return (0);
	}
}
