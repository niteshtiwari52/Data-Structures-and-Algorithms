// Problem : WAP to delete an element and return the reduced size
#include <iostream>
using namespace std;
// Algorithm
// 1. find the element in array
// 2. if element found then delete current element and shift the next element into current element and return reduced size
// 3. if not found then simply return current size.

int deleteElement(int arr[], int n, int ele)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            break;
        }
    }

    if (i == n)
    {
        return n;
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1);
}

void display(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // write your code here
    // Time Complexity
    int arr[5];
    int n = 5, ele = 3;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    // display(arr, n);
    int newSize = deleteElement(arr, n, ele);
    cout << newSize;
    // display(arr, n);

    return 0;
}