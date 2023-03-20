#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int value);

int main()
{
    int even[8] = {2, 4, 6, 8, 12, 14, 16};
    int odd[7] = {1, 3, 5, 7, 9, 11, 13};

    int even_size = sizeof(even) / sizeof(even[0]);
    int odd_size = sizeof(odd) / sizeof(odd[0]);

    int even_index = binarySearch(even, even_size, 12);
    int odd_index = binarySearch(odd, odd_size, 9);

    cout << "index of 12 is: " << even_index << endl;
    cout << "index of 9 is: " << odd_index << endl;
    return 0;
}

int binarySearch(int array[], int size, int tvalue)
{
    int start = 0;      // or take start = 1;
    int end = size - 1; // or take end = size;
    int mid = (start + end) / 2; 
    // more optimised way -
    // mid = start + ((end - start)/2);

    while (start <= end)
    {
        if (array[mid] == tvalue)
        {
            return mid;
        }

        // if the mid value is less than target_value then go to the right part and vice versa.
        if (tvalue > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
        // more optimised way -
        // mid = start + ((end - start)/2);
    }

    return -1;
}