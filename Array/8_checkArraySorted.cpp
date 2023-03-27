// Problem : WAP that check the array is sorted or not
#include <iostream>
using namespace std;

bool checkSortedOrNotSelfTry(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false; // 0
        }
    }
    return true; // 1
}

// time complexity : O(n^2)
// Aux space :
bool checkSortedOrNotNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}
// time complexity : O(n)
// Aux space : constant
// linear solution
bool checkSortedOrNotEfficient(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    // Time Complexity

    // int arr[] = {5, 20, 12, 20, 19};
    // int arr[] = {9, 12, 34};
    int arr[] = {9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Self try Result : " << endl;
    cout << checkSortedOrNotSelfTry(arr, n) << endl;

    cout << "Naive Result : " << endl;
    cout << checkSortedOrNotNaive(arr, n) << endl;

    cout << "Efficient Result : " << endl;
    cout << checkSortedOrNotEfficient(arr, n) << endl;

    return 0;
}