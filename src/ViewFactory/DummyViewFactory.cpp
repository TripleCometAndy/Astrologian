//
// Created by Andy Langer on 4/19/26.
//


#include "DummyViewFactory.h"

#include "../Artifacts/ArtifactView.h"
#include "../Artifacts/container/DummyArtifactContainerView.h"

View *DummyViewFactory::getView(const VIEW_TYPE type, const bool addToSceneTree) const {
    switch (type) {
        case ARTIFACT_CONTAINER:
            return new DummyArtifactContainerView();
        case CRIMSON_BARB:
            return new ArtifactView();
            break;
        case AQUA_INSIGNIA:
            return new ArtifactView();
            break;
        default:
            return new View();
    }
}


