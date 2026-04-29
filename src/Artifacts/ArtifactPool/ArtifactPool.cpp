//
// Created by Andy Langer on 4/19/26.
//

#include "ArtifactPool.h"

#include <iostream>

#include "../AquaInsignia/AquaInsignia.h"
#include "../CrimsonBarb/CrimsonBarb.h"

ArtifactPool::ArtifactPool(RandomNumber& randomNumber, const ViewFactory& viewFactory)  : randomNumber(randomNumber), viewFactory(viewFactory){
    //TODO. What is this doing. Why?
    artifacts.push_back(CRIMSON_BARB);
    artifacts.push_back(AQUA_INSIGNIA);

    //TODO. What is this doing and why?
    creators[CRIMSON_BARB] = getEntry<CrimsonBarb, CrimsonBarbView>(CRIMSON_BARB);
    creators[AQUA_INSIGNIA] = getEntry<AquaInsignia, AquaInsigniaView>(AQUA_INSIGNIA);
}

std::unique_ptr<Artifact> ArtifactPool::getArtifact() const {
    //The artifact is selected at random from the pool of artifacts
    //Select a random index within the vector, and then create an artifact with that type

    //Get a random index in the artifacts vector
    const unsigned int index = randomNumber.getNumInRange(0, artifacts.size() - 1);

    //Get the VIEW_TYPE at that index
    const VIEW_TYPE type = artifacts.at(index);

    //Create and return an artifact with that type
    return constructArtifactWithType(type);
}

std::unique_ptr<Artifact> ArtifactPool::constructArtifactWithType(VIEW_TYPE type) const {
    //TODO. What is this doing. Why?
    //TODO. What if creators.find(type) returns nullptr. Should log the error and throw an exception
    return creators.find(type)->second(viewFactory);
}


