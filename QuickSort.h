#ifndef QuickSort_H
#define QuickSort_H

#include "Sort.h"

class QuickSort : public Sort
{
public:
	virtual std::vector<int> sort(std::vector<int> list);
private:
	void quick_sort(std::vector<int>& list, int low, int high);
	int paritition(std::vector<int>& list, int low, int high);
};

#endif
