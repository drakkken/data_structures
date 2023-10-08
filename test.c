#include <stdio.h>

// Function for calculating the factorial of a number
double factorial(int n)
{
    if (n <= 1)
    {
        return 1.0;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Recursive function to compute the Taylor series using Horner's rule
double taylor_series(double x, int n)
{
    if (n == 0)
    {
        return 1.0; // Base case: the zeroth term is always 1
    }
    else
    {

        return taylor_series(x, n - 1) * x / n;
    }
}

int main()
{
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = 0.0;
    for (int i = n; i >= 0; i--)
    {
        result = taylor_series(x, i) + result;
    }

    printf("The Taylor series approximation of e^%.2lf with %d terms is: %.10lf\n", x, n, result);

    return 0;
}