#include "sort.h"


void selection_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int tmp = 0;
	unsigned int j = 0;
	unsigned int ctn = 0;

	for(i = 0;i < size; i++)
	{
		ctn = i;
		for(j = i ;j < size; j++)
		{
			if(array[ctn] > array[j])
				ctn = j;
		}
		if (ctn != i)
		{
			tmp = array[i];
			array[i] = array[ctn];
			array[ctn] = tmp;
			print_array(array, size);
		}
	}
}
