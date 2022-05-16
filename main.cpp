#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int read()
{
    int x = 0;
    int flag = 1;
    char c = getchar();
    while (c != '-' && !(c >= '0' && c <= '9'))c = getchar();
    if (c == '-')flag = -1;
    else x = c - '0';
    c = getchar();
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * flag;
}

int main()
{
    std::vector<int> data;

    int i;
    char c;

    while (1)
    {
        c = getchar();

        if ((c >= '0' && c <= '9') || c == '-')
        {
            ungetc(c, stdin);
            std::cin >> i;
            data.push_back(i);
        }

        if (c == '\n')
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
