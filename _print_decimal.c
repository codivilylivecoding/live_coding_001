#include "main.h"

int _print_my_int(int n)
{

    int digit = 0;
    int n2 = 0;
    int sign = 1;

    if (n < 0)
        sign = -1;
    n *= sign;

    while (n > 0)
    {
        digit = n % 10;
        n2 = n2 * 10 + digit;
        n /= 10;
    }

    n = n2;

    if (sign == -1)
        _putchar('-');
        
    while (n > 0)
    {   
        digit = n % 10;
        _putchar('0' + digit);
        n /= 10;
    }

    return (0);
}

int _print_decimal(va_list args)
{
    double num = va_arg(args, double);
    int int_part;
    double dec_part;
    int n_decimal = 5;
    int digit = 0;
    int sign = 1;

    if (num < 0)
        sign = -1;
    num *= sign;

    if (sign == -1)
        _putchar('-');
        
    /* 152.0256 - 152 = 0.256 */
    int_part = (int) num;
    dec_part = num - int_part;

    /* display int part */
    _print_my_int(int_part);

    /* display the decimal part */
    _putchar('.');
    while (n_decimal > 0)
    {
        /* 0.256 * 10 -> 2.56 % 10 -> 2 */
        /* 2.56 * 10 -> 25.6 % 10 -> 5 */
        dec_part *= 10;
        digit = (int)dec_part % 10;
        _putchar('0' + digit);
        n_decimal--;
    }
    
    return (0);
}
