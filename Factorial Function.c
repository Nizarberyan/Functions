#include <stdio.h>

int Factorial(int n, int fnum)
{

    for (int i = 1; i <= n; i++)
    {
        fnum *= i;
    }
    return fnum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fnum = 1;
    int result = Factorial(num, fnum);
    printf("Factorial of %d is: %d\n", num, result);
    return 0;
}
