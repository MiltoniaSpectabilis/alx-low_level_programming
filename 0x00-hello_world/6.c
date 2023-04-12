#include <stdio.h>

/**
 *
 *
 *
 */

int main (void)
{
	char charSize;
	int intSize;
	long longSize;
	long long longlongSize;
	float floatSize;


	printf("Size of a char: %ld byte(s)", sizeof(charSize));
	printf("\nSize of an int: %ld byte(s)", sizeof(intSize));
	printf("\nSize of a long int: %ld byte(s)", sizeof(longSize));
	printf("\nSize of a long long int: %ld byte(s)", sizeof(longlongSize));
	printf("\nSize of a float: %ld byte(s)\n", sizeof(floatSize));

	return (0);
}
