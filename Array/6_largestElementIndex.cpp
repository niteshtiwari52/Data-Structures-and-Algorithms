// Problem : WAP to delete an element and return the reduced size
#include <iostream>
using namespace std;
// Algorithm

// Navie Solution - 1
//  time complexity
// best case : theta(n)
// worst case : theta(n^2)
// in general : O(n)
int largestElementIndex1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
    return -1;
}
// Efficient Solution - 1
//  time complexity: theta(n)
int largestElementIndex2(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
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
    int arr[] = {1, 34, 56, 7, 75};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Navie Solution ";
    display(arr, n);
    cout << largestElementIndex1(arr, n);
    cout << endl;
    cout << "Efficient Solution ";
    display(arr, n);
    cout << largestElementIndex2(arr, n);

    return 0;
}