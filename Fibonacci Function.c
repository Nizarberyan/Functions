#include <stdio.h>

int Fibonacci(int n)
{
    int first = 0, second = 1, next;

    if (n == 0)
    {
        printf("%d ", first);
        return first;
    }
    if (n == 1)
    {
        printf("%d ", second);
        return first;
    }

    printf("%d %d ", first, second);

    for (int i = 2; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }

    return second;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    int nth_term = Fibonacci(n);
    printf("\n%dth Fibonacci term is: %d\n", n, nth_term);
    return 0;
}
