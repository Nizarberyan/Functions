#include <stdio.h>

int EvenOrOdd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = EvenOrOdd(num);

    if (result == 1)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }
}