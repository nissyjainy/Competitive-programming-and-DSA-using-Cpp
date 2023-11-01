#include <iostream>
using namespace std;
int first(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // can also be written as start + (end-start)/2
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int second(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // can also be written as start + (end-start)/2
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 12};
    int answer = first(even, 6, 12);
    int s = second(even, 6, 12);
    cout << "The first index of the required number is " << answer << "\n";
    cout << "The last index of the required number is " << s << "\n";
    cout << "The total no of index of the required number is " << (s - answer) + 1 << "\n";
    return 0;
}
