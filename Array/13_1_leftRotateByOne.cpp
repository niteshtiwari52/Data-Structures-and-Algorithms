// Problem : WAP to rotate the array left by one (means rotate in counter clockwise)
#include <iostream>
using namespace std;

// Naive Appraoch

// time complexity : theta(n)
// Aux space : theta(1) constant
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
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

    int arr[] = {40, 50, 0, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : \n";
    display(arr, n);
    cout << endl;
    cout << "Result : " << endl;
    leftRotateByOne(arr, n);
    display(arr, n);

    return 0;
}