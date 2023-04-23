// Problem : maximum sum of a circular subarray

#include <iostream>
using namespace std;
// time complexity : O(n)

// maximum subarray sum
int max_normal_subarray_sum(int arr[], int n)
{
    int res = 0, maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
// max sum of the circular subarray
int max_sum_of_circular_subarray(int arr[], int n)
{
    // calulating normal subarray sum
    int max_normal_sum = max_normal_subarray_sum(arr, n);

    if (max_normal_sum < 0)
    {
        return max_normal_sum;
    }

    // calculating circular sum

    // calculate the sum of the array and subtract the minimum sum of the subarray  form the  array sum .
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        // inverting the array
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + max_normal_subarray_sum(arr, n);

    return max(max_normal_sum, max_circular);
}
int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << max_sum_of_circular_subarray(arr, n);
    return 0;
}