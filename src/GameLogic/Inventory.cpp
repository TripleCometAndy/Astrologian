//
// Created by Andy Langer on 4/17/26.
//


#include "Inventory.h"

Inventory::Inventory(const ViewFactory & viewFactory) : artifactContainer(*dynamic_cast<ArtifactContainerView *>(viewFactory.getView(ARTIFACT_CONTAINER, true))), viewFactory(viewFactory) {
}

std::vector<const Artifact*> Inventory::getArtifacts() const {
    //TODO. Document why we are copying.
    //TODO. Atomize
    std::vector<const Artifact*> copy;

    //TODO. Document why reserve is needed
    copy.reserve(artifacts.size());
    for (const std::unique_ptr<Artifact>& a : artifacts) {
        copy.push_back(a.get());
    }

    return copy;
}

void Inventory::addArtifact(std::unique_ptr<Artifact> artifact) {
    //TODO. Just grab the view first

    artifacts.push_back(std::move(artifact));
    artifactContainer.addArtifact(artifacts.back()->getView());
}

bool Inventory::contains(const Artifact &artifact) const {
    bool found = false;

    //TODO. Use ranges from C++20
    for (const std::unique_ptr<Artifact>& a : artifacts) {
        if (artifact == *a) {
            found = true;

            break;
        }
    }

    return found;
}

unsigned long Inventory::getNumArtifacts() const {
    return artifacts.size();
}
