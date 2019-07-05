#include "holberton.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int i, j;
	char *guias = ", \t\n.;?\"(){}";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; guias[j]; j++)
		{
			if (*(s + i) == guias[j])
				if (((*(s + (i + 1))) >= 'a' && (*(s + (i + 1))) <= 'z'))
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
		}
		if (i == 0)
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) = *(s + i) - 32;
	}
	return (s);

}
