#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    scanf("%s", a);
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        // ekhane 351 char hishe be ase etar theke int value pete hole eder ascii valur theke 0 er ascii value - korle int value pawa jabe, ex= 3 er ascii value 51 - '0' ba 48 = 3 eta int value.
        sum = sum + (a[i] - '0');
    }
    printf("%d", sum);

    return 0;
}