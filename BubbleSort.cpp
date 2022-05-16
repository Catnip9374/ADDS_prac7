#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
	std::size_t i, j;
	int temp;

	for (i = 0; i < list.size() - 1; i++)
	{
		for (j = 0; j < list.size() - 1 - i; j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	
	return list;
}
