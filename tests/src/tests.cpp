#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

/* Exercise 3 */
TEST_CASE("sumtail")
{
    REQUIRE(sumtail(1,0)==1); // sumwhile(1) must be 1
    REQUIRE(sumtail(7,0)==28); // sumwhile(33) =1+2+3+4+5+6+7 = 28
    REQUIRE(sumtail(33,0)==561); // sumwhile(33) =1+2+3+...+33 = 561
}

/* Exercise 3 */
TEST_CASE("sumwhile")
{
    REQUIRE(sumtail(1,0)==1); // sumwhile(1) must be 1
    REQUIRE(sumtail(7,0)==28); // sumwhile(7) = 1+2+3+4+5+6+7 = 28
    REQUIRE(sumtail(33,0)==561); // sumwhile(33) =1+2+3+...+33 = 561
}

/* Exercise 2 */
TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

/* Exercise 4 */
TEST_CASE("fib")
{
    REQUIRE(fib(1,0,1)==1); // fib(1) must be 1 (base case)
    REQUIRE(fib(2,0,1)==1); // fib(2) must be 1 as well (base case)
    REQUIRE(fib(7,0,1)==13); 
    REQUIRE(fib(15,0,1)==610);
}


