// Problem : WAP that return the max subarray sum.

#include <iostream>
#include <vector>
using namespace std;
// Time complexity = O(n)

int maximum_subarray_sum(vector<int> &arr)
{
    int max_sum = arr[0], max_Ending = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        max_Ending = max(arr[i], max_Ending + arr[i]);
        max_sum = max(max_Ending, max_sum);
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