// Problem :  Stock buy and sell Naive solution
#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int> &arr)
{
    int maxProfit = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                maxProfit = max(maxProfit, arr[j] - arr[i]);
            }
        }
    }
    return maxProfit;
}
int main()
{
    vector<int> arr = {1, 5, 3, 8, 12};
    cout << maxProfit(arr);

    return 0;
}
