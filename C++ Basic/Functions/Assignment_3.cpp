#include <iostream>
using namespace std;
void Add(int, int);
void Add(char[], char[]);

int main()
{
    int a = 10, b = 20;
    char char1[10] = {'a'};
    char char2[10] = {'a'};

    // function calling
    Add(a, b);
    Add(char1, char2);
    return 0;
}

void Add(int a, int b)
{
    cout << a + b << endl;
}
void Add(char char1[], char char2[])
{
    string temp;
    temp = char1;
    temp += char2;
    cout << temp << endl;
}