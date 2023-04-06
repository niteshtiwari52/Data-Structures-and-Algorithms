#include <iostream>
using namespace std;
int fnAdd(int, int);
int fnMultiply(int, int);
int fnDivide(int, int);
int fnSubtract(int, int);

int main()
{
    int a, b;
    int (*fnPtr[4])(int, int) = {fnAdd, fnMultiply, fnDivide, fnSubtract};
    cout << "Enter a & b : ";
    cin >> a >> b;
    for (int i = 0; i < 4; i++)
    {
        cout << fnPtr[i](a, b) << endl;
        }

    return 0;
}

int fnAdd(int a, int b)
{
    return a + b;
}
int fnMultiply(int a, int b)
{
    return a * b;
}
int fnDivide(int a, int b)
{
    return a / b;
}
int fnSubtract(int a, int b)
{
    return a - b;
}