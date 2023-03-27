// Problem : WAP that check the array is sorted or not
#include <iostream>
using namespace std;

void reverseArraySelfTry(int arr[], int n)
{
    // not working
    // for (int i = 0; i < n; i++)
    // {
    //     int j;
    //     int temp = arr[i];
    //     for (j = 0; j < n - 1; j++)
    //     {
    //         arr[j] = arr[j + 1];
    //     }
    //     arr[j + 1] = temp;
    // }
}

// time complexity :theta(n)
// Aux space : theta(1)
// linear solution
void reverseArrayEfficient(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        // swapping
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        // increment and decrement the value of the low and high
        low++;
        high--;
    }
}

void display(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    // Time Complexity

    // int arr[] = {5, 20, 12, 20, 19};
    int arr[] = {9, 12, 34};
    // int arr[] = {9};
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);
    cout << "Self try Result : " << endl;
    display(arr, n);
    reverseArraySelfTry(arr, n);
    display(arr, n);

    cout << "Efficient Result : " << endl;
    display(arr, n);
    reverseArrayEfficient(arr, n);
    display(arr, n);

    return 0;
}