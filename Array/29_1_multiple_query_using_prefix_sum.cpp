/**
 * Problem : Given a fixed array and multilpe queries of following types on the array , how to efficently perform these queries.
 *
 */
#include <iostream>
#include <vector>

using namespace std;

/***
 * Efficient Approach - Prefix sum
 *
 * Time : O(1)
 * Space :
 *
 *
 */

int getSum(int arr[], int n, int l, int r)
{
    // calculate prefix sum array
    int prefix_sum[100];
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    if (l != 0)
    {
        return (prefix_sum[r] - prefix_sum[l - 1]);
    }

    return prefix_sum[r];
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 1, r = 2;
    cout << getSum(arr, n, l, r);
    return 0;
}