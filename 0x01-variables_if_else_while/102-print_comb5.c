#include <stdio.h>
/**
 * main - Entry pointt
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num2 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num2 != num1)
			{
				putchar(num1 / 10 + 48);
				putchar(num1 % 10 + 48);
				putchar(' ');
				putchar(num2 / 10 + 48);
				putchar(num2 % 10 + 48);

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
