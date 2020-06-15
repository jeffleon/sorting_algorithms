#include "sort.h"


void selection_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int tmp = 0;
	unsigned int j = 0;
	int ctn = 0;

	for(i = 0;i < size; i++)
	{
		ctn = 0;
		for(j = i ;j < size; j++)
		{
			if(array[i] > array[j])
			{
				ctn +=1;
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
		if(ctn > 0)
			print_array(array, size);
	}
}
