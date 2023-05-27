// Problem :
#include <iostream>
using namespace std;
// moore's voting algorithm
// Time : O(n)
// Space :O(1)
int findMajority(int arr[], int n)
{
    // find a candidate that appear more time
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        // if same element then increment the count else dcrement the count
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        // if the value of the count is 0 then set res as  the current index and count = 1
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    // check that the element is actually majority
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n / 2)
    {
        return -1;
    }
    return res;
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {8, 8, 6, 6, 6, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "index of majority element = " << findMajority(arr, n);
    return 0;
}