//
// Created by Andy Langer on 4/17/26.
//

#include "AquaInsigniaTests.h"

#include <catch2/catch_test_macros.hpp>
#include "../src/Artifacts/AquaInsignia/AquaInsignia.h"
#include "../src/Artifacts/CrimsonBarb/CrimsonBarb.h"

TEST_CASE("Test AquaInsignia does equal") {
    AquaInsigniaView view1;
    AquaInsigniaView view2;
    AquaInsignia a(view1);
    AquaInsignia b(view2);

    REQUIRE(a == b);
}

TEST_CASE("Test AquaInsignia name does not equal") {
    AquaInsigniaView view1;
    CrimsonBarbView view2;
    AquaInsignia a(view1);
    CrimsonBarb b(view2);

    REQUIRE(a != b);
}