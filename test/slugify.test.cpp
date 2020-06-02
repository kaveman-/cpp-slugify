#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <iostream>
#include "catch.hpp"
#include "slugify.hpp"

TEST_CASE("Create slugified string", "[Slugify]" ) {

	std::string test = string_to_slug("Dies ist €in Test! ");
	std::cout << test << std::endl;

	REQUIRE(test.length() > 0);
}
