#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h"
#include "do_while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum of squares")
{
	REQUIRE(14 == sum_of_squares(3));
	REQUIRE(30 == sum_of_squares(4));
	REQUIRE(55 == sum_of_squares(5));
}

TEST_CASE("Verify sum of squares for")
{
	REQUIRE(14 == sum_of_squares_for(3));
	REQUIRE(30 == sum_of_squares_for(4));
	REQUIRE(55 == sum_of_squares_for(5));
}

TEST_CASE("Test echo number")
{
	REQUIRE(3 == echo_number(3));
	REQUIRE(10 == echo_number(10));
	REQUIRE(100 == echo_number(100));
}

TEST_CASE("Test get char ascii")
{
	REQUIRE(65 == get_ascii_value('A'));
	REQUIRE(97 == get_ascii_value('a'));
}
