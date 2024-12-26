// Delete an element from an index in a list

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
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 2;

    for (int i = position; i < size ; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    size--;
    
    cout << "After Deletion: ";
    showdata(arr, size);
    return 0;
}