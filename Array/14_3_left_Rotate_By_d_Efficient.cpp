// Problem : WAP to rotate the array left by d (means rotate in counter clockwise)
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int low, int high)
{
    while (low < high)
    {
        // swap(arr[low], arr[high]);
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

// Efficient Appraoch - Reversal Algorithm
// time complexity :theta (d + n-d + n) = theta(2n) =  theta(n)
// Aux space :theta(1)
void leftRotateByD(vector<int> &arr, int d)
{
    int n = arr.size();

    // reverse first d-element
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

// To print the Array values
void display(vector<int> arr)
{

    cout << "arr[] = ";

    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << endl;
}
int main()
{

    // Time Complexity

    vector<int> arr{1, 2, 3, 4, 5};
    int d = 3;
    cout << "Original Array : \n";
    display(arr);
    cout << endl;
    cout << "Result : " << endl;
    leftRotateByD(arr, d);
    display(arr);

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int d = 2;
    // cout << "Original Array : \n";
    // display(arr, n);
    // cout << endl;
    // cout << "Result : " << endl;
    // leftRotateByD(arr, n, d);
    // display(arr, n);

    return 0;
}