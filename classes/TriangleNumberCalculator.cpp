#include "TriangleNumberCalculator.hpp"

bool TriangleNumberCalculator::is_n_natural(const int &n) {
    if (n >= 0) return true;
    return false;
}

int TriangleNumberCalculator::value(const int n) {
    if (is_n_natural(n)) {
        if (n == 0) return 0;
        return (n + value(n - 1));
    }
    return 0;
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
    if (is_n_natural(n) && is_n_natural(m) && m != 0) {
        const double x = (value(n));
        const double y = (value(m));
        return (x / y);
    }
    return 0;

}

std::string TriangleNumberCalculator::sequence(const int n) {
    if (n != 0 && is_n_natural(n)) {
        return sequence(n - 1) + " " + std::to_string(value(n));
    }
    return "";
}