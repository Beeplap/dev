#include <stdio.h>
#include <math.h>

double f(double x)
{
    /************************************************/
    /**/                                          /**/
    /**/   return x * log10(x) -1.2;    
    /**/                                          /**/
    /************************************************/
}

double derivative(double x)
{
    double h = 1e-6;
    return (f(x + h) - f(x - h)) / (2 * h);
}

int main()
{
    double x0, x1, tol;
    int max_iter, step = 1;

    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    printf("Enter number of decimal places : ");
    int decimal_places;
    scanf("%d", &decimal_places);
    tol = pow(10, -decimal_places);

    printf("Enter maximum iterations: ");
    scanf("%d", &max_iter);

    while (step <= max_iter)
    {
        double f0 = f(x0);
        double g0 = derivative(x0);

        if (fabs(g0) < 1e-12)
        {
            printf("Derivative too small. Method fails.\n");
            return 1;
        }

        x1 = x0 - f0 / g0;
        printf("Step %d: x = %.6lf, f(x) = %.6lf\n", step, x1, f(x1));

        if (fabs(x1 - x0) < tol)
        {
            printf("\nRoot found: %.9lf after %d iterations\n", x1, step);
            return 0;
        }
 
        x0 = x1;
        step++;
    }

    printf("\nNot Convergent within %d iterations.\n", max_iter);
    return 0;
}
