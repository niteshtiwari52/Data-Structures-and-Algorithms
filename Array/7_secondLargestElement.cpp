// Problem : WAP that return the index of the 2nd largest element in the array
#include <iostream>
using namespace std;
int largestElementEfficient(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}

int secondLargestNaive(int arr[], int n)
{
    int largest = largestElementEfficient(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
// time complexity : theta(n)
// Aux space : theta(1)
int secondLargestEfficient(int arr[], int n)
{
    int secondLargest = -1, largest = 0;

    for (int i = 1; i < n; i++)
    {
        // if current element is found largest
        if (arr[i] > arr[largest])
        {
            secondLargest = largest;
            largest = i;
        }
        // if current element is less then and greater then secondLargest Element
        else if (arr[i] != arr[largest])
        {
            if (secondLargest == -1 || arr[i] > arr[secondLargest])
            {
                secondLargest = i;
            }
        }
    }
    return secondLargest;
}
int main()
{

    // Time Complexity

    int arr[] = {5, 20, 12, 20, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Naive Result : " << endl;
    cout << secondLargestNaive(arr, n) << endl;

    cout << "Efficient Result : " << endl;
    cout << secondLargestEfficient(arr, n) << endl;

    return 0;
}