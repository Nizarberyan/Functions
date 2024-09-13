#include <stdio.h>
#include <string.h>

void Reverse(const char *string)
{
    int length = strlen(string) - 1;
    for (int i = length; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}
int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%99s", string);
    Reverse(string);
    return 0;
}