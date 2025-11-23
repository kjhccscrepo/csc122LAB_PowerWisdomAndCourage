#include "classes/TriangleNumberCalculator.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

TEST_CASE( "value call for 0 and negative numbers behaves as expected" ) {
    REQUIRE( TriangleNumberCalculator::value(0) == 0 );
    REQUIRE( TriangleNumberCalculator::value(-1) == 0);
    REQUIRE( TriangleNumberCalculator::value(-2) == 0);
    REQUIRE( TriangleNumberCalculator::value(-3) == 0);
}
TEST_CASE( "value call for natural numbers returns expected values" ) {
    REQUIRE( TriangleNumberCalculator::value(1) == 1 );
    REQUIRE( TriangleNumberCalculator::value(2) == 3 );
    REQUIRE( TriangleNumberCalculator::value(4) == 10);
    REQUIRE( TriangleNumberCalculator::value(9) == 45);
}
TEST_CASE( "add call for 0 and negative numbers behaves as expected" ) {
    REQUIRE( TriangleNumberCalculator::add(0, 0) == 0  );
    REQUIRE( TriangleNumberCalculator::add(0, -3) == 0 );
    REQUIRE( TriangleNumberCalculator::add(-7, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::add(4, 0) == 10 );
    REQUIRE( TriangleNumberCalculator::add(0, 4) == 10 );
}
TEST_CASE( "add call for natural numbers behaves as expected" ) {
    REQUIRE( TriangleNumberCalculator::add(1, 1) == 2 );
    REQUIRE( TriangleNumberCalculator::add(2, 3) == 9 );
    REQUIRE( TriangleNumberCalculator::add(4, 2) == 13);
}
TEST_CASE( "subtract call for 0 and negative numbers behaves as expected" ) {
    REQUIRE( TriangleNumberCalculator::subtract(0, 0) == 0  );
    REQUIRE( TriangleNumberCalculator::subtract(0, -3) == 0 );
    REQUIRE( TriangleNumberCalculator::subtract(-7, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::subtract(4, 0) == 10 );
    REQUIRE( TriangleNumberCalculator::subtract(0, 4) == -10);
}
TEST_CASE( "subtract call for natural numbers behaves as expected behaves as expected" ) {
    REQUIRE( TriangleNumberCalculator::subtract(1, 1) == 0  );
    REQUIRE( TriangleNumberCalculator::subtract(2, 3) == -3 );
    REQUIRE( TriangleNumberCalculator::subtract(4, 2) == 7  );
}
TEST_CASE( "multiply call behaves as expected with 0 and negative numbers" ) {
    REQUIRE( TriangleNumberCalculator::multiply(0, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::multiply(-7, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::multiply(4, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::multiply(0, -3) == 0 );
    REQUIRE( TriangleNumberCalculator::multiply(0, 2) == 0 );
}
TEST_CASE( "multiply call behaves as expected with natural numbers" ) {
    REQUIRE( TriangleNumberCalculator::multiply(1, 1) == 1 );
    REQUIRE( TriangleNumberCalculator::multiply(2, 1) == 3 );
    REQUIRE( TriangleNumberCalculator::multiply(1, 2) == 3 );
    REQUIRE( TriangleNumberCalculator::multiply(2, 3) == 18);
    REQUIRE( TriangleNumberCalculator::multiply(3, 2) == 18);
}
TEST_CASE( "divide call behaves as expected with 0 and negative numbers" ) {
    REQUIRE( TriangleNumberCalculator::divide(0, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::divide(-7, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::divide(4, 0) == 0 );
    REQUIRE( TriangleNumberCalculator::divide(0, -3) == 0 );
    REQUIRE( TriangleNumberCalculator::divide(0, 2) == 0 );
}
TEST_CASE( "divide call behaves as expected with natural numbers" ) {
    REQUIRE( TriangleNumberCalculator::divide(1, 1) == 1 );
    REQUIRE( TriangleNumberCalculator::divide(2, 1) == 3 );
    const double i = 1;
    const double d = 3;
    REQUIRE( TriangleNumberCalculator::divide(1, 2) == (i / d));
}
TEST_CASE( "sequence call behaves as expected with a 0 or negative number" ) {
    REQUIRE( TriangleNumberCalculator::sequence(0).empty() );
    REQUIRE( TriangleNumberCalculator::sequence(-1).empty());
    REQUIRE( TriangleNumberCalculator::sequence(-2).empty());
    REQUIRE( TriangleNumberCalculator::sequence(-3).empty());
}
TEST_CASE( "sequence call behaves as expected with natural numbers" ) {
    REQUIRE( TriangleNumberCalculator::sequence(1) == " 1");
    REQUIRE( TriangleNumberCalculator::sequence(2) == " 1 3");
    REQUIRE( TriangleNumberCalculator::sequence(4) == " 1 3 6 10");
    REQUIRE( TriangleNumberCalculator::sequence(11) == " 1 3 6 10 15 21 28 36 45 55 66");
}