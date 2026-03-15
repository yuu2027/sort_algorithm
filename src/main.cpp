#include <iostream>
#include <vector>
#include "components/bubble_sort.h"

int main()
{
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "ソート前: ";
    printArray(data);

    bubbleSort(data);

    std::cout << "ソート後: ";
    printArray(data);

    return 0;
}