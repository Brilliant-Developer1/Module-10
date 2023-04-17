#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000001], b[1001];
    scanf("%s %s", a, b);

    int lenght_a = strlen(a);
    int lenght_b = strlen(b);

    printf("%d %d\n%s %s", lenght_a, lenght_b, a, b);
    return 0;
}