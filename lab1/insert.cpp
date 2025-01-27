// Insert an element at any index in a list

#include <iostream>
using namespace std;

void showdata(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int pos = 3, element = 7;

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    size++;
    
    cout << "After Insertion: ";
    showdata(arr, size);
    return 0;
}