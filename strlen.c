#include <stdio.h>

int main()
{
    char str1[500];
    int i;

    scanf("%s", str1);

    for (i = 0; str1[i] != '\0'; ++i)
        ;

        printf("\nOutput: %d", i);
    return 0;
}