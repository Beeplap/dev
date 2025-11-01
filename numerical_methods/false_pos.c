#include <stdio.h>
#include <math.h>

double f(double x)
{
     // Example: x * log10(fabs(x)) - 1.2 (defined for x ≠ 0)
    if (x == 0) return -1.2; // or handle as needed
    return x * log10(fabs(x)) - 1.2;
}

int main()
{
    double x0, x1, x2, tol;
    int max_iter, decimal_places, step = 1;

    printf("Enter first guess: ");
    scanf("%lf", &x0);
    printf("Enter second guess: ");
    scanf("%lf", &x1);

    // Check if initial guesses bracket the root
 
    if (f(x0) * f(x1) > 0)
    {
        printf("Invalid initial guesses. f(x0) and f(x1) must have opposite signs.\n");
        return 1;
    }

    printf("Enter number of decimal places: ");
    scanf("%d", &decimal_places);
    tol = pow(10, -decimal_places);

    printf("Enter maximum iterations: ");
    scanf("%d", &max_iter);

    while (step <= max_iter)
    {
        // False position formula
        x2 = x0 - (f(x0) * (x1 - x0)) / (f(x1) - f(x0));

        printf("Step %d: x = %.6lf, f(x) = %.6lf\n", step, x2, f(x2));

        if (fabs(f(x2)) < tol)
        {
            printf("\nRoot found: %.6lf after %d iterations\n", x2, step);
            return 0;
        }

        // Update the interval
        if (f(x0) * f(x2) < 0)
            x1 = x2;
        else
            x0 = x2;

        step++;
    }

    printf("\nNot convergent within %d iterations.\n", max_iter);
    return 0;
}
