#include <stdio.h>
int main()
{
    char arrey[5];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &arrey[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%c", arrey[i]);
    }

    return 0;
}