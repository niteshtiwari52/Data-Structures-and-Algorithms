/**
 *
 *
 * Problem : WAP to print the max consecutive sum of the array
 *
 *
 */
#include <iostream>

using namespace std;

/***
 * Naive Approach
 *
 * Time : O((n-k)*k)
 * Space :
 *
 *
 */

int maxConsecutiveSum(int arr[], int n, int k)
{
    int max_sum = -1;
    // Run a loop up 0 -> n-1
    for (int i = 0; i + k - 1 < n; i++)
    {

        int sum = 0;
        // run a loop 0 -> k and sum k element
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
        }
        // compare sum and max_sum and take max_sum;
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "the max_sum of " << k << " element is  = " << maxConsecutiveSum(arr, n, k);
    return 0;
}