#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // can also be written as start + (end-start)/2
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1; // ahiya aapde jo hu shu kau chu ki tu recusrion thi aene nanu karto jay che ok 
        }  
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2; // ane jyare nanu karish tyare tare mid ni value bhi to change thashe ae mei ahiya change kari che ok 
    }
        return -1;
    }


int main()
{
    int even[6] = {2, 4, 6, 8, 12, 14};
    int odd[5] = {3, 8, 11, 14, 16};
    int answer = binary_search(even, 6, 12);
    cout << "The index of the requird number is " << answer << "\n";
    return 0;
}