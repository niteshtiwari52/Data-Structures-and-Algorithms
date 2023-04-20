// Problem : WAP that return the max subarray sum.

#include <iostream>
#include <vector>
using namespace std;
// Time complexity = O(n^2)

int maximum_subarray_sum(vector<int> &arr)
{
    int max_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            max_sum = max(sum, max_sum);
        }
    }
    return max_sum;
}
void print_Subarray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

    cout << "max subarray sum : " << maximum_subarray_sum(arr) << endl;
    print_Subarray(arr);
    return 0;
}