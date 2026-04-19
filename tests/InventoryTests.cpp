//
// Created by Andy Langer on 4/17/26.
//

#include <catch2/catch_test_macros.hpp>

#include "../src/Artifacts/AquaInsignia/AquaInsignia.h"
#include "../src/Artifacts/CrimsonBarb/CrimsonBarb.h"
#include "../src/ViewFactory/DummyViewFactory.h"
#include "../src/GameLogic/Inventory.h"

TEST_CASE("Inventory has no artifacts by default") {
    DummyViewFactory dummyViewFactory;
    Inventory inventory(dummyViewFactory);

    REQUIRE(inventory.getNumArtifacts() == 0);
}

TEST_CASE("Test can successfully add artifact to inventory") {
    AquaInsigniaView view;
    DummyViewFactory dummyViewFactory;
    Inventory inventory(dummyViewFactory);

    inventory.addArtifact(std::make_unique<AquaInsignia>(view));

    REQUIRE(inventory.contains(AquaInsignia(view)));
}

TEST_CASE("Test can successfully get artifacts from inventory") {
    AquaInsigniaView view;
    CrimsonBarbView view2;
    DummyViewFactory dummyViewFactory;
    Inventory inventory(dummyViewFactory);

    inventory.addArtifact(std::make_unique<AquaInsignia>(view));
    inventory.addArtifact(std::make_unique<CrimsonBarb>(view2));

    std::vector<const Artifact *> artifacts = inventory.getArtifacts();

    const AquaInsignia * insignia1 = dynamic_cast<const AquaInsignia *>(artifacts[0]);
    const CrimsonBarb * barb2 = dynamic_cast<const CrimsonBarb *>(artifacts[1]);

    REQUIRE(insignia1 != nullptr);
    REQUIRE(barb2 != nullptr);
}
