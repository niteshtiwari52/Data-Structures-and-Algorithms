// Problem : WAP to search an array in an array
#include <iostream>
using namespace std;
int search(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        // if element found
        if (arr[i] == ele)
        {
            return i;
        }
    }
    // if element not found
    return -1;
}
int main()
{
    // Time complexity :
    // sorted : O(logn)
    // unsorted : O(n)

    // Declaration
    int arr[] = {1, 2, 45, 6, 7};
    int ele;

    // calculating length
    int len = sizeof(arr) / sizeof(arr[0]);

    // Input
    cout << "Enter the element  to find : ";
    cin >> ele;

    // search in array
    cout << search(arr, len, ele);

    return 0;
}