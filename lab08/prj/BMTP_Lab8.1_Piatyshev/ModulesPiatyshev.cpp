#include "ModulesPiatyshev.h"
#include <cmath>

const double PI = 3.14159265358979323846;

double s_calculation(double x, double y, double z) {
    double numerator = pow(2 * z + 1, 2) - sqrt(std::abs(y - 0.5 * z));
    double denominator = sqrt(cos(z + y * z) + pow(x, 2));
    return z + PI * (numerator / denominator);
}
