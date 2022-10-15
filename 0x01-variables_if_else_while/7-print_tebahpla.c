#include <stdio.h>
/**
 * main - prints alphabet in reverse order followed by a new line
 * Return: Always 1
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar("\n");

	return (0);
}
