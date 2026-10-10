
#include <cmath>
#include "functions.h"

double p(const double x)
{
    return 1 + x * x / 2 - x * x * x * x / 4;
}

double calculateC(const double s)
{
    double ps = p(s);

    return (ps * ps * (1 + 2 * s + s * s)
        - ps * ps * ps * (1 + 3 * s + s * s * s))
        / (1 + sqrt(ps + pow(ps, 4)));
}
