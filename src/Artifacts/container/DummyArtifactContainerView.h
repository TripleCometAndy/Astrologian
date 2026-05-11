//
// Created by Andy Langer on 4/26/26.
//

#ifndef ASTROLOGIAN_DUMMYARTIFACTCONTAINERVIEW_H
#define ASTROLOGIAN_DUMMYARTIFACTCONTAINERVIEW_H
#include "ArtifactContainerView.h"

/**
 *  Dummy implementation of ArtifactContainerView. Used only in testing
 */
class DummyArtifactContainerView : public ArtifactContainerView {
public:
    /** @copydoc ArtifactContainerView::addArtifact */
    void addArtifact(const ArtifactView& artifact) override;
};

#endif //ASTROLOGIAN_DUMMYARTIFACTCONTAINERVIEW_H
