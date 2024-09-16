#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

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
