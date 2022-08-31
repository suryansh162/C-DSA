// Binary search is only applicable on monotonic order (either increasing or decreasing)

#include <iostream>
using namespace std;

int binarySerach(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // key is big then mid go to right
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        // key is less then mid go to left
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 16};
    int index = binarySerach(even, 6, 20);
    cout << "index of key is " << index << endl;
    // int odd[5] = {3,8,11,14,16};
}