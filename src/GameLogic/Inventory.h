//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_INVENTORY_H
#define ASTROLOGIAN_INVENTORY_H
#include <vector>

#include "../Artifacts/Artifact.h"
#include "../Artifacts/container/ArtifactContainerView.h"
#include "../ViewFactory/ViewFactory.h"


//TODO. Doc
class Inventory {
    //TODO. Document variable
    std::vector<std::unique_ptr<Artifact>> artifacts;

    //TODO. Document variable
    ArtifactContainerView & artifactContainer;

    //TODO. Document variable
    const ViewFactory & viewFactory;

public:
    //TODO. Doc
    explicit Inventory(const ViewFactory & viewFactory);

    //TODO. Doc
    [[nodiscard]] std::vector<const Artifact*> getArtifacts() const;

    //TODO. Doc
    void addArtifact(std::unique_ptr<Artifact> artifact);

    //TODO. Doc
    [[nodiscard]] bool contains(const Artifact& artifact) const;

    //TODO. Doc
    [[nodiscard]] unsigned long getNumArtifacts() const;
};

#endif //ASTROLOGIAN_INVENTORY_H
