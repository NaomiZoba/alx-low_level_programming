#include  <stdio.h>

/**
 * main - prints the alphabet in lower case
 * followed by a new line, exccept q and e
 * Return: Always 0
 */
int main(viod)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
