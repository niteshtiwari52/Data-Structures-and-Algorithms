// Problem : WAP to print the leaders in an array.
// leaders means no element should be greater in the right side of an element.
#include <iostream>
#include <vector>
using namespace std;

// Navie Appraoch
// time complexity :
// Aux space :
void printLeaders(vector<int> &arr)
{
    bool flag = true;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
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
    int d = 3;
    cout << "Original Array : \n";
    display(arr);
    cout << endl;
    cout << "Result : " << endl;
    printLeaders(arr);
    display(arr);

    return 0;
}