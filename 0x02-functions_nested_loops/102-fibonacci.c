#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1;
	int second = 1;
	int sum = 0;
	int i;

	for (i = 0; i <= 50; i++)
	{
		printf("%d", second);
		if (i != 50)
		{
			printf(", ");
		}
		sum = first + second;
		first = second;
		second = sum;
	}
	return (0);
}
