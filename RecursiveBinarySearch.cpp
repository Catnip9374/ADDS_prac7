#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int data)
{
    int low = 0;
    int high = (int)list.size() - 1;
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = list[mid];
        
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
