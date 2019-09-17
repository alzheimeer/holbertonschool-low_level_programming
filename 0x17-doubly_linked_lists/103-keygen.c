#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, ma;
	size_t len, add;
	char *hardcoded =
		"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char w[7] = "      ";
	(void)argc;
	len = strlen(argv[1]);
	w[0] = hardcoded[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add = add + argv[1][i];
	w[1] = hardcoded[(add ^ 79) & 63];
	for (i = 0, ma = 1; i < len; i++)
		ma = ma * argv[1][i];
	w[2] = hardcoded[(ma ^ 85) & 63];
	for (ma = argv[1][0], i = 0; i < len; i++)
		if ((char)ma <= argv[1][i])
			ma = argv[1][i];
	srand(ma ^ 14);
	w[3] = hardcoded[rand() & 63];
	for (ma = 0, i = 0; i < len; i++)
		ma = ma + (argv[1][i] * argv[1][i]);
	w[4] = hardcoded[(ma ^ 239) & 63];
	for (ma = 0, i = 0; (char)i < argv[1][0]; i++)
		ma = rand();
	w[5] = hardcoded[(ma ^ 229) & 63];
	printf("%s\n", w);
	return (0);
}
