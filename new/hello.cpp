#include <bits/stdc++.h>
using namespace std;
void merge(int array[], int const left, int const mid, int const right)
{
    int const subArray_1 = mid - left + 1;
    int const subArray_2 = right - mid;
    auto *leftArray = new int[subArray_1], *rightArray = new int[subArray_2];
    for (auto i = 0; i < subArray_1; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArray_2; j++)
        rightArray[j] = array[mid + 1 + j];
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
    while (indexOfSubArrayOne < subArray_1 && indexOfSubArrayTwo < subArray_2)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    while (indexOfSubArrayOne < subArray_1)
    {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    while (indexOfSubArrayTwo < subArray_2)
    {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
void merge_Sort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    merge_Sort(array, begin, mid);
    merge_Sort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void print_Arr(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {13, 16, 10, 14, 18, 12};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is : ";
    print_Arr(arr, arr_size);
    merge_Sort(arr, 0, arr_size - 1);
    cout << "Sorted array is : ";
    print_Arr(arr, arr_size);
    cout << endl;
    return 0;
}
