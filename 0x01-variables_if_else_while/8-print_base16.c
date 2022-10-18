#include <stdio.h>
/**
 *main - Entry point.
 *Description: This is for task eight.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
