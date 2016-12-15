#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calc sum", "[sum]") {
    int a = 4;
    int b = 4;
    
    int sum1 = sum( a, b );
    
	REQUIRE( sum1 == 8);
}


SCENARIO("calc dev", "[dev]") {
    int a = 3;
    int b = 4;
    
    int dev1 = dev( a, b );
    
	REQUIRE( dev1 == -1);
}

SCENARIO("calc mult", "[mult]") {
    int a = 3;
    int b = 4;
    
    int mult1 = mult( a, b );
    
	REQUIRE( mult1 == 12);
}

SCENARIO("calc sub", "[sub]") {
    int a = 3;
    int b = 4;
    
    double sub1 = sub( a, b );
    
	REQUIRE( sub1 == 0.75);
}

SCENARIO("calc pow", "[pow]") {
    int a = 3;
    int b = 4;
    
    double pow1 = pow( a, b );
    
	REQUIRE( pow1 == 81.);
}
SCENARIO("calc power", "[pow]") {
    int a = 3;
    int b = -2;
    
     double power1 = pow( a, b );
    
	REQUIRE( pow1 == 0.111111);
}

SCENARIO("calc sqrta", "[sqrta]") {
    int a = 4;
   
    int sqrta1 = sqrta(a);
    
	REQUIRE( sqrta1 == 2);
}
SCENARIO("calc sqrtaa", "[sqrta]") {
    int a = -4;
   
    int sqrtaa1 = sqrta(a);
    
	REQUIRE( sqrtaa1 == "Impossible");
}
SCENARIO("calc sqrtbb", "[sqrtb]") {
    int b = -4;
   
    int sqrtbb1 = sqrta(b);
    
	REQUIRE( sqrtbb1 == "Impossible");
}
SCENARIO("calc sqrtb", "[sqrtb]") {
    int b = 9;
    
    int sqrtb1 = sqrtb( b );
    
	REQUIRE( sqrtb1 == 3);
}
SCENARIO("calc sub0", "[sub0]") {
    int a = 3;
    int b = 0;
    
    double sub0 = sub0( a, b );
    
	REQUIRE( sub0 == "Error.Impossible to divide by zero");
}
