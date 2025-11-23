#ifndef tri_calc_hpp
#define tri_calc_hpp
#include <string>

class TriangleNumberCalculator {
private:
    static bool is_n_natural(const int &n);
public:
    static int value (int n);
    static int subtract(int n, int m);
    static int add(int n, int m);
    static int multiply(int n, int m);
    static double divide(int n, int m);
    static std::string sequence(int n);
};

#endif