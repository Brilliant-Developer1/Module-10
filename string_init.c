#include <stdio.h>
int main()
{
    // char arrey[5] = "Abid\0";
    char arrey[5] = "Abid";

    // for (int i = 0; i < 4+1; i++)
    // {
    //     printf("%c", arrey[i]);
    // }
    int size = sizeof(arrey) / sizeof(char);
    printf("%d\n", size);
    printf("%s", arrey);

    return 0;
}