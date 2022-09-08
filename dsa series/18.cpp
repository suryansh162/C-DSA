#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 4, 32, 2, 8};
    bool swapping = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapping = true;
            }
        }
        if (swapping == false)
        {
            cout << "kya krra bhai sb sorted h already";
            break;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}