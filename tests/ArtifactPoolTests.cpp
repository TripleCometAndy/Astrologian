//
// Created by Andy Langer on 4/25/26.
//

#include "ArtifactPoolTests.h"

#include <catch2/catch_test_macros.hpp>
#include "../src/Artifacts/ArtifactPool/ArtifactPool.h"
#include "../src/Artifacts/CrimsonBarb/CrimsonBarb.h"
#include "../src/Artifacts/AquaInsignia/AquaInsignia.h"
#include "../src/ViewFactory/DummyViewFactory.h"

TEST_CASE("Test get CrimsonBarb successfully") {
    RandomNumber randomNumber(6);
    DummyViewFactory dummy;
    ArtifactPool artifactPool(randomNumber, dummy);

    std::unique_ptr<Artifact> artifact = artifactPool.getArtifact();

    CrimsonBarb* crimsonBarb = dynamic_cast<CrimsonBarb*>(artifact.get());

    REQUIRE(crimsonBarb != nullptr);
}

TEST_CASE("Test get AquaInsignia successfully") {
    RandomNumber randomNumber(7);
    DummyViewFactory dummy;
    ArtifactPool artifactPool(randomNumber, dummy);

    std::unique_ptr<Artifact> artifact = artifactPool.getArtifact();

    AquaInsignia* aquaInsignia = dynamic_cast<AquaInsignia *>(artifact.get());

    REQUIRE(aquaInsignia != nullptr);
}
