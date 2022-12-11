//! Implicit Cinversion
// char to int Conversion
#include <stdio.h>

    int main()
{

    char a = '5';
    int b = 9;

    int result = a + b;

    printf("%d", result);
    return 0;
}

// double to int Conversion
#include <stdio.h>

    int main()
{

    double a = 5.67;
    int b = 9;

    int result = a + b;

    printf("%d", result);
    return 0;
}

// int to double Conversion
#include <stdio.h>
    int main()
{

    double a = 5.67;
    int b = 9;

    double result = a + b;

    printf("%lf", result);
    return 0;
}

//! Explicit Type Conversion
// Convert double data type to int
#include <stdio.h>

    int main()
{

    double a = 5.67;
    int b = 9;

    double result = (int)a + b;

    printf("%lf", result);
    return 0;
}