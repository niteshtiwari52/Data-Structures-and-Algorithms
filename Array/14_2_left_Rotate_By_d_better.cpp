// Problem : WAP to rotate the array left by d (means rotate in counter clockwise)
#include <iostream>
using namespace std;

// better Appraoch

// time complexity :theta (d + n-d + d) = theta(n+d) and d <= n therefore theta(n)
// Aux space :theta(d)
void leftRotateByD(int arr[], int n, int d)
{
    // define an auxilary array
    int temp[100];

    // store the first d element into the temp array.
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // shift the remaiong n element to the dth position
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // adding the temp array into the original shifted array .
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
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