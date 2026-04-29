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

    creators[CRIMSON_BARB] = getEntry<CrimsonBarb, CrimsonBarbView>(CRIMSON_BARB);
    creators[AQUA_INSIGNIA] = getEntry<AquaInsignia, AquaInsigniaView>(AQUA_INSIGNIA);
}

std::unique_ptr<Artifact> ArtifactPool::getArtifact() const {
    //Get a random index in the artifacts vector
    const unsigned int index = randomNumber.getNumInRange(0, artifacts.size() - 1);
    const VIEW_TYPE type = artifacts.at(index);

    return creators.find(type)->second(viewFactory);
}


