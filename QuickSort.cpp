#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    quick_sort(list, 0, (int)list.size() - 1);
    return list;
}

void QuickSort::quick_sort(std::vector<int>& list, int low, int high)
{
    if (low < high)
    {
        int pivot = paritition(list, low, high);
        quick_sort(list, low, pivot - 1);
        quick_sort(list, pivot + 1, high);
    }
}

int QuickSort::paritition(std::vector<int>& list, int low, int high)
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