#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test AND Truth Table")
{
	REQUIRE(false == (false && false));
	REQUIRE(false == (false && true));
	REQUIRE(false == (true && false));
	REQUIRE(true == (true && true));
}

TEST_CASE("Test OR Truth Table")
{
	REQUIRE(false == (false || false));
	REQUIRE(true == (false || true));
	REQUIRE(true == (true || false));
	REQUIRE(true == (true || true));
}
