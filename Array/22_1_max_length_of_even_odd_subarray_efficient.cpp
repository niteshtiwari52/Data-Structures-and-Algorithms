// Problem : maximum legnth of the even odd subarray

#include <iostream>
using namespace std;
// time complexity : O(n)

// Approcah : kadane's Algorithm
// 1. start with 2nd element
// 2. check that the current element is alternate with the previous element
// 3. if altenate true then extending the subarray and if not alternate with the previous element then make a new subarray

int max_Length_Even_Odd_subarray(int arr[], int n)
{
    int max_length = 1;
    int current_length = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0 || arr[i] % 2 == 0 && arr[i - 1] % 2 != 0)
        {
            // extending the subarray
            current_length++;
            max_length = max(current_length, max_length);
        }
        else
        {
            // new subarray making
            current_length = 1;
        }
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