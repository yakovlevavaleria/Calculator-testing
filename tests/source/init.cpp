#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sumary", "[sumary]") {
    double a = 16.0;
    double b = 8.0;
    int c = 3;
    
    double rv = sumary( a, b );
    
	REQUIRE( rv == 24.0 );
}
SCENARIO("calculator differense", "[differense]") {
    double a = 16.0;
    double b = 8.0;
    int c = 3;
    
    double rv = differense( a, b );
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator multiplication", "[multiplication]") {
    double a = 16.0;
    double b = 8.0;
    int c = 3;
    
    double rv = multiplication( a, b );
    
	REQUIRE( rv == 128.0 );
}
SCENARIO("calculator quotient", "[quotient]") {
    double a = 16.0;
    double b = 0;
    int c = 3;	
    
    double *rv = quotient( a, b );
    
	REQUIRE( rv == nullptr );
}
SCENARIO("calculator power", "[power]") {
    double a = 2.0;
    double b = 8.0;
    int c = -3;
	
    double rv = power( a, c );
    
	REQUIRE( rv == 0.125 );
}
SCENARIO("calculator squareroot", "[squareroot]") {
    double a = -16;
    double b = 8.0;
    int c = 3;	
    
    double *rv = squareroot( a );
    	
REQUIRE( rv == nullptr );
}
