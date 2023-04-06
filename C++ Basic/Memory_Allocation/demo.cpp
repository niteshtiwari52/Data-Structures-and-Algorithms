// Problem :
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array to be created dynamic : ";
    cin >> size;
    // malloc and frees
    // int *arr = (int *)malloc(size * sizeof(int));
    // cout << "Memory allocated : " << arr << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     arr[i] = i + 1;
    // }

    // cout << "Values stored in dynamically created pointer are : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }
    // cout << endl;
    // free(arr);
    // cout << "Memory de-allocated : " << arr;

    int *c_arr = (int *)calloc(size, sizeof(int));
    int *m_arr = (int *)malloc(size * sizeof(int));

    cout << "Values stored in dynamically created pointer using calloc are : ";
    for (int i = 0; i < size; i++)
    {
        cout << *(c_arr + i) << " ";
    }
    cout << endl;
    cout << "Values stored in dynamically created pointer using malloc are : ";
    for (int i = 0; i < size; i++)
    {
        cout << *(m_arr + i) << " ";
    }
    cout << endl;
    free(c_arr);
    free(m_arr);
    cout << "c_arr Memory de-allocated : " << c_arr;
    cout << "m_arr Memory de-allocated : " << m_arr;

    int *arr = (int *)malloc(size * sizeof(int));

    arr = (int *)realloc(arr, 2 * size * sizeof(int));

    arr = (int *)realloc(arr, 0);

    arr = (int *)realloc(NULL, size * sizeof(int));

    free(arr);

    return 0;
}