#ifndef QuickSort_H
#define QuickSort_H

#include "Sort.h"

class QuickSort : public Sort
{
public:
	virtual std::vector<int> sort(std::vector<int> list);
private:
	void quick_sort(std::vector<int>& list, std::size_t low, std::size_t high);
	std::size_t paritition(std::vector<int>& list, std::size_t low, std::size_t high);
};

#endif
