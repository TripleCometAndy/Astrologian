//
// Created by Andy Langer on 4/19/26.
//


#include "DummyViewFactory.h"

#include "../Artifacts/AquaInsignia/AquaInsigniaView.h"
#include "../Artifacts/container/DummyArtifactContainerView.h"
#include "../Artifacts/CrimsonBarb/CrimsonBarbView.h"

View *DummyViewFactory::getView(const VIEW_TYPE type, const bool addToSceneTree) const {
    switch (type) {
        case ARTIFACT_CONTAINER:
            return new DummyArtifactContainerView();
        case CRIMSON_BARB:
            return new CrimsonBarbView();
            break;
        case AQUA_INSIGNIA:
            return new AquaInsigniaView();
            break;
        default:
            return new View();
    }
}


