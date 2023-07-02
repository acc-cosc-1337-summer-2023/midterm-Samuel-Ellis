#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing question 1 get_fahrenheit"){
	double epsilon = 0.001;
	REQUIRE(std::abs(get_fahrenheit(37)-98.6)<epsilon);
	REQUIRE(get_fahrenheit(25)==77);
	REQUIRE(get_fahrenheit(0)==32);
}
