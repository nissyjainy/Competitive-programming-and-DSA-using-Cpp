#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool binarysearch(int *arr, int start, int end, int target)
{
    // base case
    if (start > end) // ha jyare start > end thay tyare stop kar ok
    {
        return false;
    }
    // int start = 0;
    // int end = size-1; ahiya tare redefinition aai jashe ok
    int mid = (start + end) / 2;
    if (arr[mid] = target)
    {
        return true;
    } // aa condition mara thi miss thai gayi hati
    if (arr[mid] > target)
    {
        return binarysearch(arr, 0, mid - 1, target);
    }
    else
    {
        return binarysearch(arr, mid + 1, end, target);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 10;
    int start = 0;
    int end = size - 1;
    int ans = binarysearch(arr, start, end, target);
    if (ans == true)
    {
        cout << "The element is present"
             << "\n";
    }
    else
    {
        cout << "The element is not present"
             << "\n";
    }
    return 0;
}