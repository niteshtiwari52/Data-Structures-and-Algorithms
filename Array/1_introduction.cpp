// Array introduction :
// Problem :
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    //  array declartion
    int arr1[] = {1, 2, 3, 4, 5};

    int arr2[5] = {12,
                   3,
                   45,
                   5};

    int n = 10;
    // int arr3[n];

    // length of the array

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << size1;
    cout << endl;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << size2;
    cout << endl;

    // Input
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    // displying
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}