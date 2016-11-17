#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sumary", "[sumary]") {
    double a = 25.0;
    double b = 1.0;
    int c = 3;
    
    double rv = sumary( a, b );
    
	REQUIRE( rv == 26.0 );
}
SCENARIO("calculator differense", "[differense]") {
    double a = 25.0;
    double b = 1.0;
    int c = 3;
    
    double rv = differense( a, b );
    
	REQUIRE( rv == 24.0 );
}
SCENARIO("calculator multiplication", "[multiplication]") {
    double a = 25.0;
    double b = 1.0;
    int c = 3;
    
    double rv = multiplication( a, b );
    
	REQUIRE( rv == 25.0 );
}
SCENARIO("calculator quotient", "[quotient]") {
    double a = 25.0;
    double b = 1.0;
    int c = 3;	
    
    double rv = quotient( a, b );
    
	REQUIRE( rv == 25.0 );
}
SCENARIO("calculator power", "[power]") {
    double a = 25.0;
    double b = 1.0;
    int c = 3;
	
    double rv = power( a, c );
    
	REQUIRE( rv == 15625.0 );
}
SCENARIO("calculator squareroot", "[squareroot]") {
    double a = 25.0;
    double b = 1.0;
    int c = 3;	
    
    double rv = squareroot( a );
    	
REQUIRE( rv == 5.0 );
}
