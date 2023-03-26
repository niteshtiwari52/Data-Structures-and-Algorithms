// Problem : wAP to insert an element in an array and return the new size

// Time Complexity  : O(n)
// insert at begining : theta(n)
// insert at end : O(1)

// for dynamic size of array :
// first n element : O(1)
// for n+1 element : theta(n)
// avg.  of  n and n+1 ele : O(1)

#include <iostream>
using namespace std;
int insert(int arr[], int n, int ele, int pos)
{
    // if Array is not full then shift the element to next pos upto given position and at given position insert the element and return new size .
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;

    return (n + 1);
}
int main()
{
    // declaration

    int arr[10];
    int cap = 10;
    int size;
    int ele = 10;
    int pos = 3;

    cout << "Enter size : ";
    cin >> size;
    if (size >= cap)
    {
        cout << "Array full can't insert more element.";
        return 0;
    }

    cout << "Enter ele: ";
    cin >> ele;

    cout << "ENter pos : ";
    cin >> pos;

    cout << "ENter the elements : ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    size = insert(arr, size, ele, pos);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
