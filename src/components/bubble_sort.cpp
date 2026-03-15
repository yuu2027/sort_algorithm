#include <iostream>
#include "bubble_sort.h"

void bubbleSort(std::vector<int>& arr)
{
    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // 1回も交換がなければ整列済み
        if (!swapped)
        {
            break;
        }
    }
}

void printArray(const std::vector<int>& arr)
{
    for (int i = 0; i < static_cast<int>(arr.size()); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}