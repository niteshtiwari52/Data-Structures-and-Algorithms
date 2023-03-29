// Problem : WAP to remove the duplicates from the original array and return the new size of the array
#include <iostream>
using namespace std;

// Naive Appraoch
// time complexity : theta(n) or O(n)
// Aux space : O(n)
int removeDuplicate(int arr[], int n)
{
    int temp[20];
    temp[0] = arr[0];
    int res = 1;
    // theta(n)
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != temp[res - 1])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    // O(n)
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }

    return res;
}

// To print the Array values
void display(int arr[], int n)
{

    cout << "arr[] = ";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    // Time Complexity

    int arr[] = {15, 15, 30, 40, 40, 50, 50, 50};
    // int arr[] = {9, 12, 34};
    // int arr[] = {9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : \n";
    display(arr, n);
    cout << endl;
    cout << "Result aftter removing duplicates : " << endl;
    n = removeDuplicate(arr, n);
    display(arr, n);

    return 0;
}