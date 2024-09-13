#include <stdio.h>

int maximum(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else if (a > b)
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
    int max_val = maximum(num1, num2);
    if (max_val == 1)
    {
        printf("Both numbers are equal.");
        return 0;
    }
    else
    {
        printf("The maximum value is: %d", max_val);
        return 0;
    }
    return 0;
}