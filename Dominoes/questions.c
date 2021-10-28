#include <stdio.h>

int out_of_range(int n, int min, int max)
{
	return ((n < min) || (n > max));
}

void to_lower_caps(char *c)
{
	if ((*c >= 'A') && (*c <= 'Z'))
	{
		*c = *c - 'A' + 'a';
	}
}

int ask_n_in_range(char *s, int min, int max)
{
	int n;

	do
	{
		printf("%s [%d-%d]: ", s, min, max);
		scanf("%d%*c", &n);
	} while (out_of_range(n, min, max));

	return n;
}

int ask_yes_or_no(char *s)
{
	char c;

	do
	{
		printf("%s [s/n]: ", s);
		scanf("%c%*c", &c);
		to_lower_caps(&c);
	} while (c != 's' && c != 'n');

	return (c == 's');
}
