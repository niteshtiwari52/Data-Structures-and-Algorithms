// Problem : WAP to move the zeros to end
#include <iostream>
using namespace std;

// Efficient Appraoch
// time complexity : O(1)
// Aux space :O(1)
void moveZerosToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;

            count++;
        }
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

    int arr[] = {40, 0, 40, 50, 0, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : \n";
    display(arr, n);
    cout << endl;
    cout << "Result : " << endl;
    moveZerosToEnd(arr, n);
    display(arr, n);

    return 0;
}