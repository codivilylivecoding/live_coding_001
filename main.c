#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int mult(int a, int b)
{
    return (a * b);
}

int div(int a, int b)
{
    return (a / b);
}

int reduce_array(int array[], int length, int (*func)(int, int))
{
    int i = 0;
    int result = 0;

    result = array[0];

    for (i = 1; i < length; i++)
    {
        result = func(result, array[i]);
    }

    return (result);
}

int (*select_reduce_array())(int[], int, int (*)(int, int))
{
    return (0);
}
int (*(*select_selector(int total, double number))())(int[], int, int (*)(int, int))
{
    return (0);
}

int (*(*(*func_select())(int, double))())(int[], int, int (*)(int, int))
{
    return (0);
}

int main(void)
{
    int (*(*(*func)(int, double))())(int[], int, int (*)(int, int));
}
