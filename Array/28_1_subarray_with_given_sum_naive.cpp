/**
 *
 *
 * Problem : Given a unsorted array of non-negative integers. Find if there is a subarray with given sum
 *
 *
 */
#include <iostream>

using namespace std;

/***
 * Naive Approach - Window sliding Technique
 *
 * Time : O(n^2)
 * Space :
 *
 *
 */

int maxConsecutiveSum(int arr[], int n, int given_sum)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == given_sum)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int given_sum = 45;
    cout << maxConsecutiveSum(arr, n, given_sum);
    return 0;
}