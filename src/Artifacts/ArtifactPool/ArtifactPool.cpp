//
// Created by Andy Langer on 4/19/26.
//

#include "ArtifactPool.h"

#include <iostream>

#include "../AquaInsignia/AquaInsignia.h"
#include "../CrimsonBarb/CrimsonBarb.h"
#include "../../Exceptions/IllegalArgumentException.h"

ArtifactPool::ArtifactPool(RandomNumber& randomNumber, const ViewFactory& viewFactory)  : randomNumber(randomNumber), viewFactory(viewFactory){
    //Add every VIEW_TYPE for artifacts into a vector.
    //This will be used later to select a random artifact
    artifacts.push_back(CRIMSON_BARB);
    artifacts.push_back(AQUA_INSIGNIA);

    //To DRY things up, I have implemented two template functions in the header
    //that will help creating an Artifact and its View.
    //Call `creators` with the key value of the artifact type you want
    creators[CRIMSON_BARB] = getEntry<CrimsonBarb, ArtifactView>(CRIMSON_BARB);
    creators[AQUA_INSIGNIA] = getEntry<AquaInsignia, ArtifactView>(AQUA_INSIGNIA);
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
    //Search for the given VIEW_TYPE in the map.
    //If an artifact type entry exists for the given type, then
    //Grab the value from the entry, and use it to create an Artifact.

    //Otherwise, throw an IllegalArgumentException. Every artifact type
    //is inside the map, so the caller must have supplied something that isn't an artifact
    if (auto search = creators.find(type); search != creators.end()) {
        return search->second(viewFactory);
    }
    
    throw IllegalArgumentException("Illegal artifact type found in 'constructArtifactWithType': " + type);
}


