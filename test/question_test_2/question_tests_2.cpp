#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test for referance_val_change_to_10 function"){
	int test1 = 12312;
	int test2 = 37;
	referance_val_change_to_10(test1);
	value_val_change_to_10(test2);
	REQUIRE(test1 == 10);
	REQUIRE(test2 == 37);
}
