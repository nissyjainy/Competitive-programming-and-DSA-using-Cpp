#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1; // size vadhi gayi ok kem ke at lat insert karvu che ok AA 3 line ma last ma add karyu che ok
        int index = size;
        arr[index] = val;
    }
    while (index > 1)
    {

        int parent = index / 2;
        if (arr[parent] < arr[index])
        {
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else
        {
            return;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << "\n";
        }
        cout << endl;
    }
    void delete()
    {
        if (size == 0)
        {
            cout << "Nothing to delete"
                 << "\n";
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < size && arr[left] > arr[i])

            {
                swap();
                i = left;
            }
            // similarly for the right
        }
    }
    void heapify()
    {
        int largest = i; // as we are using the 1 indexing jo 0 indexing follow karta hoy to left = 2*i+1 and right = 2*i+2;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (left < n && arr[left] > arr[i])
        {
            largest = left;
        }
        if (right < n && arr[right] > arr[i])
        {
            largest = right;
        }
        if (largest != i) // atle ahiya tare largest update nathi thayu to
        {
            swwap;
            heapify(arr, n, largest); // largest sudhi chalshe as kemki junu kaam to function kari chukyu che
        }
    }
};

int main()
{
    heap h; // constructor che atle ek object banai lidhu che ok
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(); // as the root nodes are already heapified ok
    }
    for (int i = 1; i < size; i++)
    {
        cout << arr[i] << "\n";
        cout << endl;
    }
}
