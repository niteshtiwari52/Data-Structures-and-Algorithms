// Problem : WAP to move the zeros to end
#include <iostream>
using namespace std;

// Naive Appraoch

// time complexity : O(n^2)
// Aux space :
void moveZerosToEnd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
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

    int arr[] = {0, 0, 40, 50, 0, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : \n";
    display(arr, n);
    cout << endl;
    cout << "Result : " << endl;
    moveZerosToEnd(arr, n);
    display(arr, n);

    return 0;
}