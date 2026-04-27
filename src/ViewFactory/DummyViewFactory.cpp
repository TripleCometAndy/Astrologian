//
// Created by Andy Langer on 4/19/26.
//


#include "DummyViewFactory.h"

#include "../Artifacts/container/DummyArtifactContainerView.h"

View *DummyViewFactory::getView(const VIEW_TYPE type, const bool addToSceneTree) const {
    switch (type) {
        case ARTIFACT_CONTAINER:
            return new DummyArtifactContainerView();
        default:
            return new View();
    }
}


