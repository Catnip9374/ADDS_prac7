#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int data)
{
    std::size_t low = 0;
    std::size_t high = list.size() - 1;
    
    while (low <= high)
    {
        std::size_t mid = (low + high) / 2;
        std::size_t value = list[mid];
        
        if (value < data)
        {
            low = mid + 1;
        }
        else if (value > data)
        {
            high = mid - 1;
        }
        else
        {
            return true;
        }
    }
    
    return false;
}
