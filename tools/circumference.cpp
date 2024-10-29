#include "circumference.h"
const double pi = 3.14159265358979323846;
double r(double user_input) {
    double circumference = user_input * 2 * pi;
    return circumference;
}
double d(double user_input) {
    double circumference = user_input * pi;
    return circumference;
}