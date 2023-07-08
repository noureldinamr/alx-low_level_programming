#include <stdio.h>

/** main - printthe number of argument 
 * argv: argument arrays
 * argc: argument counts
 *
 * Return: Always 0 (success)
 */

int main (int argc, char *argv [])
{
	int i;
	printf("%d\n", argc);
	
	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return 0;
}

