// Problem : WAP to print the max difference in an array.
// j > i therefor arr[j] - arr[i]
#include <iostream>
#include <vector>
using namespace std;

// Efficient Appraoch
// time complexity :
// Aux space :
int maxDifferenceEfficient(vector<int> arr)
{
    int n = arr.size();
    int min_value = arr[0], max_Difference = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        max_Difference = max(max_Difference, arr[i] - min_value);
        min_value = min(arr[i], min_value);
    }
    return max_Difference;
}

int main()
{

    // Time Complexity

    vector<int> arr{2, 3, 10, 5, 7, 8};
    cout << maxDifferenceEfficient(arr);
    return 0;
}