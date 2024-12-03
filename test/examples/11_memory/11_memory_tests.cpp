#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*TEST_CASE("Test class copy - shallow")
{
	Vector<int> vec1(3);
	Vector<int> vec2 = vec1;

	REQUIRE(vec1.Capacity() == vec2.Capacity());
	REQUIRE(vec1.Size() == vec2.Size());
}

TEST_CASE("Test class copy assignment")
{
	Vector<int> v1(3);
	Vector<int> v2(3);
	v2 = v1;//C++ doesn't know how to handle an equal sign with our class variables
}

TEST_CASE("Test my vector with std::move function")
{
	Vector<int> v1(3);
	Vector<int> v2 = std::move(v1);
}

TEST_CASE("Test my vector overwrite v1 with a return vector from a function")
{
	Vector<int> v1(3);
	v1 = get_vector();
}*/

TEST_CASE("Test vector push back")
{
	Vector<int> nums(3);
	REQUIRE(0 == nums.Size());
	REQUIRE(3 == nums.Capacity());

	nums.Push_Back(10);

	REQUIRE(10 == nums[0]);
	REQUIRE(1 == nums.Size());

	nums.Push_Back(5);

	REQUIRE(5 == nums[1]);
	REQUIRE(2 == nums.Size());

	nums.Push_Back(100);

	REQUIRE(100 == nums[2]);
	REQUIRE(3 == nums.Size());

	nums.Push_Back(20);
	REQUIRE(20 == nums[3]);
	REQUIRE(4 == nums.Size());
	REQUIRE(6 == nums.Capacity());
}


