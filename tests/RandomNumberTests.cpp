//
// Created by Andy Langer on 4/19/26.
//

#include "RandomNumberTests.h"

#include <catch2/catch_test_macros.hpp>

#include "../src/Util/Random/RandomNumber.h"

TEST_CASE("With static seed, get the correct result") {
    RandomNumber randomNumber(67);

    REQUIRE(randomNumber.getNumInRange(0, 45) == 3);
}

TEST_CASE("With non-static seed, make sure result is in the correct range") {
    RandomNumber randomNumber;

    int result = randomNumber.getNumInRange(0, 20);
    bool success = result >= 0 && result <= 20;

    REQUIRE(success);
}