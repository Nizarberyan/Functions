#include <stdio.h>

int Multiple(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int num1, num2;
    printf("enter the two numbers: ");
    scanf("%d%d", &num1, &num2);

    int result = Multiple(num1, num2);
    printf("%d times %d is: %d\n", num1, num2, result);
    return 0;
}