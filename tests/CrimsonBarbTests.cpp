//
// Created by Andy Langer on 4/16/26.
//

#include "CrimsonBarbTests.h"

#include <catch2/catch_test_macros.hpp>

#include "../src/Artifacts/AquaInsignia/AquaInsignia.h"
#include "../src/Artifacts/CrimsonBarb/CrimsonBarb.h"


TEST_CASE("Test CrimsonBarb does equal") {
    CrimsonBarbView view1;
    CrimsonBarbView view2;
    CrimsonBarb a(view1);
    CrimsonBarb b(view2);

    REQUIRE(a == b);
}

TEST_CASE("Test CrimsonBarb name does not equal") {
    CrimsonBarbView view;
    AquaInsigniaView view2;
    CrimsonBarb a(view);
    AquaInsignia b(view2);

    REQUIRE(a != b);
}