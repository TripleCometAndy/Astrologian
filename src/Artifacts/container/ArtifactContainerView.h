//
// Created by Andy Langer on 4/25/26.
//

#ifndef ASTROLOGIAN_ARTIFACTCONTAINERVIEW_H
#define ASTROLOGIAN_ARTIFACTCONTAINERVIEW_H

#include "../../View/View.h"

class ArtifactView;

/**
 * Interface encapsulating classes that represent the View for a UI container
 * for Artifacts.
 */
class ArtifactContainerView : public View {
public:
    /**
     *  Add an artifact to this container
     * @param artifactView The artifact to add to the container
     */
    virtual void addArtifact(const ArtifactView& artifactView) = 0;
};

#endif //ASTROLOGIAN_ARTIFACTCONTAINERVIEW_H
