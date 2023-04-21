// Problem : maximum legnth of the even odd subarray

#include <iostream>
using namespace std;
// time complexity : O(n^2)
int max_Length_Even_Odd_subarray(int arr[], int n)
{
    int max_length = 1;
    for (int i = 0; i < n; i++)
    {
        int current_length = 1;

        for (int j = i + 1; j < n; j++)
        {
            // check currrent element is alternate with previous element
            if (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0 || arr[j] % 2 == 0 && arr[j - 1] % 2 != 0)
            {
                current_length++;
            }
            else
            {
                break;
            }
        }
        max_length = max(current_length, max_length);
    }

    return max_length;
}
int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    cout << max_Length_Even_Odd_subarray(arr, n);
    return 0;
}