#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
    std::vector<int> data;
    int i;
    while (std::cin >> i)
    {
        data.push_back(i);
        if (std::cin.get() == '\n')
        {
            break;
        }
    }
    Sort* s = new QuickSort();
    data = s->sort(data);
    RecursiveBinarySearch rbs;
    std::cout << std::boolalpha << rbs.search(data, 1);

    for (const auto& d : data)
    {
        std::cout << " " << d;
    }

    delete s;

    return 0;
}
