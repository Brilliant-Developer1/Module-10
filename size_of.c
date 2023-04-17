#include <stdio.h>
int main()
{
    int a[5];
    int size = sizeof(a) / sizeof(int); // 4 per int
    printf("%d", size);
    return 0;
}