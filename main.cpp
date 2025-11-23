#include <iostream>
#include "classes/TriangleNumberCalculator.hpp"

int main() {
    std::cout << "Welcome to the triangle calculator program\n";
    std::cout << TriangleNumberCalculator::value(1);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::value(2);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::value(4);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::value(3);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::add(1, 1);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::add(2, 3);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::add(4, 2);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::add(8, 2);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::subtract(1, 1);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::subtract(2, 3);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::subtract(4, 2);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::subtract(9, 3);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::multiply(2, 3);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::divide(9, 7);
    std::cout << "\n";
    std::cout << TriangleNumberCalculator::sequence(11);
    std::cout << "\n";
    return 0;
}