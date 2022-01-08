#include <stdio.h>

int main()
{
    int i, n;
    char str[200];
    gets(str);

    for (n = 0; str[n] != '\0'; ++n)
        ;
    printf("\nOutput: ");
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
    }
    return 0;
}