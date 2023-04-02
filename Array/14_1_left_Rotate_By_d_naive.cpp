// Problem : WAP to rotate the array left by d (means rotate in counter clockwise)
#include <iostream>
using namespace std;
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

// Naive Appraoch

// time complexity : theta(nd) time
// Aux space : theta(1)
void leftRotateByD(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
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

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    cout << "Original Array : \n";
    display(arr, n);
    cout << endl;
    cout << "Result : " << endl;
    leftRotateByD(arr, n, d);
    display(arr, n);

    return 0;
}