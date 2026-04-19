//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_INVENTORY_H
#define ASTROLOGIAN_INVENTORY_H
#include <vector>

#include "../Artifacts/Artifact.h"
#include "../Artifacts/container/ArtifactContainerView.h"
#include "../ViewFactory/ViewFactory.h"


class Inventory {
    std::vector<std::unique_ptr<Artifact>> artifacts;
    ArtifactContainerView & artifactContainer;
    const ViewFactory & viewFactory;

public:
    explicit Inventory(const ViewFactory & viewFactory);

    [[nodiscard]] std::vector<const Artifact*> getArtifacts() const;

    void addArtifact(std::unique_ptr<Artifact> artifact);

    [[nodiscard]] bool contains(const Artifact& artifact) const;

    [[nodiscard]] unsigned long getNumArtifacts() const;
};



#endif //ASTROLOGIAN_INVENTORY_H
