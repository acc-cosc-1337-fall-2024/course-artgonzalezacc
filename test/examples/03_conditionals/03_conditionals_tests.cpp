#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"

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

TEST_CASE("Test NOT Truth Table")
{
	REQUIRE(true == !false);
	REQUIRE(false == !true);
}

TEST_CASE("Test AND Truth Table one false negates result")
{
	REQUIRE(false == (true && true && true && true && false));
}

TEST_CASE("Test OR Truth Table one true makes result true")
{
	REQUIRE(true == (false || false || false || false ||  true));
}

TEST_CASE("Determine if a letter is a vowel")
{
	REQUIRE(false == is_vowel('b'));
	REQUIRE(true == is_vowel('a'));
	REQUIRE(true == is_vowel('e'));
	REQUIRE(true == is_vowel('i'));
	REQUIRE(true == is_vowel('o'));
	REQUIRE(true == is_vowel('u'));
	REQUIRE(false == is_vowel('z'));
}

TEST_CASE("Determine if a letter is a consonant")
{
	REQUIRE(false == is_consonant('a'));
	REQUIRE(true == is_consonant('b'));
	REQUIRE(true == is_consonant('c'));
	REQUIRE(true == is_consonant('f'));
	REQUIRE(true == is_consonant('h'));
	REQUIRE(false == is_consonant('u'));	
	REQUIRE(true == is_consonant('z'));
	
}

TEST_CASE("test is number even")
{
	REQUIRE(true == is_even(2));
	REQUIRE(false == is_even(3));
	REQUIRE(true == is_even(4));
	REQUIRE(true == is_even(100));
	REQUIRE(false == is_even(101));
}

TEST_CASE("Test get generation")
{
	REQUIRE("Invalid Year" == get_generation(1800));
	REQUIRE("The Greatest Generation" == get_generation(1915));
	REQUIRE("The Silent Generation" == get_generation(1930));
	REQUIRE("Baby Boomer Generation" == get_generation(1960));
	REQUIRE("Generation X" == get_generation(1971));
	REQUIRE("Generation Y" == get_generation(1990));
	REQUIRE("Generation Z" == get_generation(2010));
	REQUIRE("Generation Alpha" == get_generation(2020));
	REQUIRE("Invalid Year" == get_generation(2030));
}
