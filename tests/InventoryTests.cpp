//
// Created by Andy Langer on 4/17/26.
//

#include <catch2/catch_test_macros.hpp>

#include "../src/ViewFactory/DummyViewFactory.h"
#include "../src/GameLogic/Inventory.h"

TEST_CASE("Inventory has no artifacts by default") {
    DummyViewFactory dummyViewFactory;
    Inventory inventory(dummyViewFactory);

    REQUIRE(inventory.getNumArtifacts() == 0);
}

TEST_CASE("Test can successfully add artifact to inventory") {
    ArtifactView view;
    DummyViewFactory dummyViewFactory;
    Inventory inventory(dummyViewFactory);

    inventory.addArtifact(std::make_unique<Artifact>("AquaInsignia", view));

    REQUIRE(inventory.contains(Artifact("AquaInsignia", view)));
}

TEST_CASE("Test can successfully get artifacts from inventory") {
    ArtifactView view;
    ArtifactView view2;
    DummyViewFactory dummyViewFactory;
    Inventory inventory(dummyViewFactory);

    inventory.addArtifact(std::make_unique<Artifact>("AquaInsignia", view));
    inventory.addArtifact(std::make_unique<Artifact>("CrimsonBarb", view2));

    std::vector<const Artifact *> artifacts = inventory.getArtifacts();

    const Artifact * insignia1 = artifacts[0];
    const Artifact * barb2 = artifacts[1];

    REQUIRE(insignia1 != nullptr);
    REQUIRE(barb2 != nullptr);
}
