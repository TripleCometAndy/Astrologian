//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_ARTIFACTPOOL_H
#define ASTROLOGIAN_ARTIFACTPOOL_H
#include "../Artifact.h"
#include "../../Util/Random/RandomNumber.h"
#include "../../ViewFactory/ViewFactory.h"


class ArtifactPool {
    RandomNumber& randomNumber;
    std::vector<VIEW_TYPE> artifacts;
    const ViewFactory& viewFactory;

public:
    ArtifactPool(RandomNumber& randomNumber, const ViewFactory& viewFactory);

    [[nodiscard]] std::unique_ptr<Artifact> getArtifact() const;
};



#endif //ASTROLOGIAN_ARTIFACTPOOL_H
