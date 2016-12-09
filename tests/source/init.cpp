#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator Sum", "[Sum]") {
    double x = 3;
    int y = 4;
    
    long double rv = Sum( x, y );
    
	REQUIRE( rv == 7);
}
SCENARIO("calculator Dev", "[Dev]") {
    double x = 8;
    int y = 0;
    
    long double *rv = Dev( x, y );
    
	REQUIRE( rv == nullptr);
}
SCENARIO("calculator Mult", "[Mult]") {
    double x = 3;
    int y = 4;
    
    long double rv = Mult( x, y );
    
	REQUIRE( rv == 12);
}
SCENARIO("calculator Sub", "[Sub]") {
    double x = 5;
    int y = 4;
    
    long double rv = Sub( x, y );
    
	REQUIRE( rv == 1);
}
SCENARIO("calculator Pow1", "[Pow1]") {
    double x = 25;
    int y = -2;
    
   long double rv = Pow1( x, y );
    
	REQUIRE( rv == 5 );
}
SCENARIO("calculator Sqrt3", "[Sqrt3]") {
    double x = -0.25;
    
    long double *rv = Sqrt3( x );
    
	REQUIRE( rv == nullptr);
}
