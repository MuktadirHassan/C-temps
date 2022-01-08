#include <stdio.h>

int main()
{
    int i, n;
    char str[200];
    gets(str);

    for (n = 0; str[n] != '\0'; ++n)
        ;
    printf("\nOutput: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}