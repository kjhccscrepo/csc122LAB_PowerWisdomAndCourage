#ifndef TRIANGLE_NUMBER_TRIANGLENUMBERCALCULATOR_HPP
#define TRIANGLE_NUMBER_TRIANGLENUMBERCALCULATOR_HPP
#include <string>
class TriangleNumberCalculator {
public:
    static int value (int n);
    static int subtract(int n, int m);
    static int add(int n, int m);
    static int multiply(int n, int m);
    static double divide(int n, int m);
    static std::string sequence(int n);
};
#endif