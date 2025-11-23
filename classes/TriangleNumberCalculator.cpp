#include "TriangleNumberCalculator.hpp"

int TriangleNumberCalculator::value(const int n) {
    if (n == 0) return 0;
    return (n + value(n - 1));
}

int TriangleNumberCalculator::subtract(const int n, const int m) {
    return (value(n) - value(m));
}

int TriangleNumberCalculator::add(const int n, const int m) {
    return (value(n) + value(m));
}

int TriangleNumberCalculator::multiply(const int n, const int m) {
    return (value(n) * value(m));
}

double  TriangleNumberCalculator::divide(const int n, const int m) {
    const double x = (value(n));
    const double y = (value(m));
    return (x / y);
}

std::string TriangleNumberCalculator::sequence(const int n) {
    if (n == 0) return "";
    return sequence(n - 1) + " " + std::to_string(value(n));
}
