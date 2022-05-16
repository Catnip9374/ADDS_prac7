#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    quick_sort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quick_sort(std::vector<int>& list, std::size_t low, std::size_t high)
{
    if (low < high)
    {
        std::size_t pivot = paritition(list, low, high);
        quick_sort(list, low, pivot - 1);
        quick_sort(list, pivot + 1, high);
    }
}

std::size_t QuickSort::paritition(std::vector<int>& list, std::size_t low, std::size_t high)
{
    int pivot = list[low];
    
    while (low < high)
    {
        while (low < high && list[high] >= pivot)
        {
            --high;
        }
        
        list[low] = list[high];
        
        while (low < high && list[low] <= pivot)
        {
            ++low;
        }
        
        list[high] = list[low];
    }
    
    list[low] = pivot;
    
    return low;
}