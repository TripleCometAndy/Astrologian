//
// Created by Andy Langer on 4/25/26.
//

#ifndef ASTROLOGIAN_ARTIFACTCONTAINERVIEW_H
#define ASTROLOGIAN_ARTIFACTCONTAINERVIEW_H

#include "../../View/View.h"

class ArtifactContainerView : public View {
public:
    virtual void addArtifact(const View& artifact) = 0;
};

#endif //ASTROLOGIAN_ARTIFACTCONTAINERVIEW_H
