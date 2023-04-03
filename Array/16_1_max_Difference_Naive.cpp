// Problem : WAP to print the max difference in an array.
// j > i therefor arr[j] - arr[i]
#include <iostream>
#include <vector>
using namespace std;

// naive Appraoch
// time complexity : theta(n^2)
// Aux space :
int maxDifferenceNaive(vector<int> arr)
{
    int n = arr.size();
    int max_Difference = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            max_Difference = max(max_Difference, arr[j] - arr[i]);
        }
    }
    return max_Difference;
}

int main()
{

    // Time Complexity

    vector<int> arr{2, 3, 10, 5, 7, 8};
    cout << maxDifferenceNaive(arr);
    return 0;
}