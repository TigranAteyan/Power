double Power(int x, int n)
{
    if (n == 0)
        return 1.0;

    double result = 1.0;
    int exponent = n;

    if (n < 0)
        exponent = -n;

    for (int i = 0; i < exponent; ++i)
        result *= x;

    if (n < 0)
        return 1.0 / result;

    return result;
}
