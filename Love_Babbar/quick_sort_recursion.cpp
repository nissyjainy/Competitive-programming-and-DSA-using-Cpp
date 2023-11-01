#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotindex = s + count; // original position of the pivot
    swap(arr[pivotindex], arr[s]);
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < arr[pivotindex] && i<e) // if e not included to i<e else i<=e  
        {
            i++;
        }
        while (arr[j] > arr[pivotindex] && j> s)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex) // aa condition kem ok
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        return pivotindex;
    }
}
void quicksort(int *arr, int s, int e)
{

    if (s >= e) 
    {
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1); // left part mate
    quicksort(arr, p + 1, e); // right part mate
}
int main()
{
    int arr[5] = {23, 41, 1, 3, 45};
    int size = 5;
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}
// aama tare algo ae che ki pivot element ne select kar ok ane pachi aene aeni correct position ma lay ok pachi recursion thi tu aene left ane right ma sort kar ok 