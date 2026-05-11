//
// Created by Andy Langer on 4/25/26.
//

#include "ArtifactPoolTests.h"

#include <catch2/catch_test_macros.hpp>
#include "../src/Artifacts/ArtifactPool/ArtifactPool.h"
#include "../src/ViewFactory/DummyViewFactory.h"

TEST_CASE("Test get CrimsonBarb successfully") {
    RandomNumber randomNumber(6);
    DummyViewFactory dummy;
    ArtifactPool artifactPool(randomNumber, dummy);

    std::unique_ptr<Artifact> artifact = artifactPool.getArtifact();

    Artifact* crimsonBarb = artifact.get();

    REQUIRE(crimsonBarb != nullptr);
}

TEST_CASE("Test get AquaInsignia successfully") {
    RandomNumber randomNumber(7);
    DummyViewFactory dummy;
    ArtifactPool artifactPool(randomNumber, dummy);

    std::unique_ptr<Artifact> artifact = artifactPool.getArtifact();

    Artifact* aquaInsignia = artifact.get();

    REQUIRE(aquaInsignia != nullptr);
}
