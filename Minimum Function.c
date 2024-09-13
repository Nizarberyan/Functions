#include <stdio.h>

int minimum(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else if (a < b)
    {
        return a;
    }
    else if (a == b)
        return 1;
}
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int min_val = minimum(num1, num2);
    if (min_val == 1)
    {
        printf("Both numbers are equal.");
        return 0;
    }
    else
    {
        printf("The minimal value is: %d", min_val);
        return 0;
    }
    return 0;
}