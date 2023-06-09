// Problem : WAP to print the leaders in an array.
// leaders means no element should be greater in the right side of an element.
#include <iostream>
#include <vector>
using namespace std;

// Navie Appraoch
// time complexity : O(n^2)
// Aux space :
void printLeaders(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
    }
}

// To print the Array values
void display(vector<int> arr)
{

    cout << "arr[] = ";

    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << endl;
}
int main()
{

    // Time Complexity

    vector<int> arr{1, 2, 3, 4, 5};

    printLeaders(arr);

    return 0;
}