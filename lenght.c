#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    // fgets(a, 14, stdin);
    // int count = 0;

    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }
    int lenght = strlen(a);

    printf("%d", lenght);
    return 0;
}