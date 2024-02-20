#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int myArray1[] = {1, 2, 6, 4, 8};
	int myArray2[] = {7, 3, 9, 2, 1};
	int myArray3[] = {1, 1, 1, 1, 1};
	int myArray4[] = {};
	int myArray5[] = {1};

	size_t sizes[] = {sizeof(myArray1)/sizeof(myArray1[0]),
		sizeof(myArray2)/sizeof(myArray2[0]),
		sizeof(myArray3)/sizeof(myArray3[0]),
		sizeof(myArray4)/sizeof(myArray4[0]),
		sizeof(myArray5)/sizeof(myArray5[0])};

	for (unsigned int i = 0; i < sizeof(sizes)/sizeof(sizes[0]); ++i)
	{
		printf("Testing array %u with length %zu\n", i + 1, sizes[i]);
		bubble_sort(myArray1, sizes[i]);
		print_array(myArray1, sizes[i]);
	}
	return (0);
}
