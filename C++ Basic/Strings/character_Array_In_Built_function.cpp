#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char str1[10] = "welcome";
    char str2[10] = "Nitesh ";
    char str3[10];
    int len;

    // strcpy()
    strcpy(str3, str1);
    cout << str3 << endl;

    // strcat()
    strcat(str1, str2);
    cout << str1 << endl;
    // strlen()
    len = strlen(str2);
    cout << len;
}