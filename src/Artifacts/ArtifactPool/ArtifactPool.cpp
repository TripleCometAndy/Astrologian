//
// Created by Andy Langer on 4/19/26.
//

#include "ArtifactPool.h"

#include <iostream>

#include "../AquaInsignia/AquaInsignia.h"
#include "../CrimsonBarb/CrimsonBarb.h"

ArtifactPool::ArtifactPool(RandomNumber& randomNumber, const ViewFactory& viewFactory)  : randomNumber(randomNumber), viewFactory(viewFactory){
    artifacts.push_back(CRIMSON_BARB);
    artifacts.push_back(AQUA_INSIGNIA);
}

std::unique_ptr<Artifact> ArtifactPool::getArtifact() const {
    //Get a random index in the artifacts vector
    const unsigned int index = randomNumber.getNumInRange(0, artifacts.size() - 1);
    const VIEW_TYPE type = artifacts.at(index);

    std::unique_ptr<Artifact> artifact;

    //TODO. DRY this up later
    switch (type) {
        case CRIMSON_BARB : {
            View * crimson = viewFactory.getView(CRIMSON_BARB, false);
            const auto crimsonBarbView = dynamic_cast<CrimsonBarbView*>(crimson);

            artifact = std::make_unique<CrimsonBarb>(*crimsonBarbView);
            break;
        }
        case AQUA_INSIGNIA : {
            View * aqua = viewFactory.getView(AQUA_INSIGNIA, false);
            const auto aquaInsigniaView = dynamic_cast<AquaInsigniaView*>(aqua);
            artifact = std::make_unique<AquaInsignia>(*aquaInsigniaView);

            break;
        }
    }

    return artifact;
}


